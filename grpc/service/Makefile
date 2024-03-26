# Makefile for a gRPC service and corresponding Protobuf files
# Author: Andrew Jarombek
# Date: 3/24/2024

generate:
	poetry shell \
	 && python -m grpc_tools.protoc -I. --python_out=grpc_running_service --grpc_python_out=grpc_running_service running.proto
