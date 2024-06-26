import os

import grpc

from grpc_running_service import running_pb2, running_pb2_grpc


def run():
    host = "localhost:50051"

    with grpc.insecure_channel(host) as channel:
        stub = running_pb2_grpc.RunningStub(channel)
        response = stub.GetUserWeeklyMileage(
            running_pb2.WeeklyMileageRequest(
                username="user123", startDate="2024-01-01", endDate="2024-03-31"
            )
        )
        for weekly_mileage in response.mileages:
            print(f"Week: {weekly_mileage.week}, Mileage: {weekly_mileage.mileage}")


if __name__ == "__main__":
    run()
