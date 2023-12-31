"""
Airflow DAG that uses XCOMs with the Taskflow API.
Author: Andrew Jarombek
Date: 11/20/2021
"""

from typing import Dict, Any
from datetime import timedelta

from airflow import DAG
from airflow.utils.dates import days_ago
from airflow.decorators import task
import pandas as pd


default_args = {
    'owner': 'airflow',
    'depends_on_past': False
}


with DAG(
    dag_id="taskflow",
    description="A DAG that uses XCOMs with the Taskflow API",
    default_args=default_args,
    dagrun_timeout=timedelta(hours=2),
    start_date=days_ago(1),
    schedule_interval="@daily",
    default_view="graph",
    is_paused_upon_creation=False,
    tags=["sample", "python", "taskflow"]
) as dag:

    @task
    def data_creation():
        # Winter Race Goals
        return {
            'dates': [
                '11/25/2021', '12/16/2021', '12/31/2021',
                '1/6/2022', '1/8/2022', '1/23/2022',
                '2/6/2022', '2/11/2022', '2/13/2022',
                '2/26/2022', '3/4/2022', '3/6/2022',
                '3/20/2022', '4/18/2022'
            ],
            'miles': [
                4.78, 1, 4,
                1.86, 6.21, 3.11,
                6.21, 1, 4,
                4, 1.86, 3.11,
                13.1, 26.2
            ],
            'location': [
                'Manchester, CT', 'New York, NY', 'New York, NY',
                'New York, NY', 'New York, NY', 'New York, NY',
                'New York, NY', 'New York, NY', 'New York, NY',
                'New York, NY', 'New York, NY', 'New York, NY',
                'New York, NY', 'Boston, MA'
            ],
            'type': [
                'road', 'indoor', 'road',
                'indoor', 'road', 'indoor',
                'road', 'indoor', 'road',
                'road', 'indoor', 'road',
                'road', 'road'
            ],
            'goal_time': [
                None, '4:45', '21:30',
                '9:30', '34:00', '15:55',
                '33:40', '4:38', '21:20',
                '21:10', '9:20', '15:59',
                '1:14:30', '2:41:00'
            ]
        }

    @task
    def data_cleaning(data: Dict[str, Any]):
        # Indoor Track races
        df = pd.DataFrame(data)
        cleaned_df = df[df['type'] == 'indoor']
        return cleaned_df.to_dict(orient='list')

    @task
    def data_analysis(data: Dict[str, Any]):
        df = pd.DataFrame(data)
        goals = df.groupby(['miles']).min()[['goal_time']]
        mile_goal = goals.loc[1]['goal_time']
        three_k_goal = goals.loc[1.86]['goal_time']
        five_k_goal = goals.loc[3.11]['goal_time']

        print(f'Mile Goal Time: {mile_goal}')
        print(f'3000m Goal Time: {three_k_goal}')
        print(f'5000m Goal Time: {five_k_goal}')

    initial_data = data_creation()
    cleaned_data = data_cleaning(initial_data)
    data_analysis(cleaned_data)
