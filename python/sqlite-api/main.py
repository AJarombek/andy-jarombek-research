"""
API for returning employee information.
Author: Andrew Jarombek
Date: 5/7/2022
"""

from typing import List

from flask import Flask, jsonify
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

from Employee import Employee

app = Flask(__name__)


@app.route('/', methods=['GET'])
def entry():
    return jsonify({})


@app.route('/employees', methods=['GET'])
def employees():

    engine = create_engine('sqlite:////src/employees.db')

    Session = sessionmaker()
    Session.configure(bind=engine)
    session = Session()

    all_employees: List[Employee] = session.query(Employee).all()

    session.close()
    return jsonify([{'id': employee.id, 'gender': employee.gender} for employee in all_employees])
