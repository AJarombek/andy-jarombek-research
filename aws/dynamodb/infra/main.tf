/**
 * Infrastructure creating a Docker playground environment on AWS.
 * Author: Andrew Jarombek
 * Date: 2/12/2021
 */

provider "aws" {
  region = "us-east-1"
}

terraform {
  required_version = ">= 0.15.0"

  required_providers {
    aws = ">= 3.28.0"
  }

  backend "s3" {
    bucket = "andrew-jarombek-terraform-state"
    encrypt = true
    key = "sandbox/devops-prototypes/dynamodb-sample"
    region = "us-east-1"
  }
}

resource "aws_dynamodb_table" "table" {
  name = "stuffed-animals"
  billing_mode = "PROVISIONED"
  read_capacity = 20
  write_capacity = 20

  hash_key = "id"

  attribute {
    name = "id"
    type = "N"
  }

  attribute {
    name = "name"
    type = "S"
  }

  attribute {
    name = "species"
    type = "S"
  }

  global_secondary_index {
    name = "NameIndex"
    hash_key = "name"
    range_key = "species"
    write_capacity = 10
    read_capacity = 10
    projection_type = "INCLUDE"
    non_key_attributes = ["description"]
  }

  tags = {
    Name = "stuffed-animals-table"
    Application = "dynamodb-sample"
    Environment = "sandbox"
  }
}

resource "aws_dynamodb_table_item" "dotty" {
  table_name = aws_dynamodb_table.table.name
  hash_key = aws_dynamodb_table.table.hash_key
  item = file("dotty.json")
}

resource "aws_dynamodb_table_item" "lily" {
  table_name = aws_dynamodb_table.table.name
  hash_key = aws_dynamodb_table.table.hash_key
  item = file("lily.json")
}