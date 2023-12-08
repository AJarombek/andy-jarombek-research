"""
Model object for the 'employees' table in SQLite.
Author: Andrew Jarombek
Date: 5/7/2022
"""

from sqlalchemy import Column, INTEGER, TEXT
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base()


class Employee(Base):
    __tablename__ = "employees"

    id = Column(INTEGER, primary_key=True)
    gender = Column(TEXT, nullable=False)
