### Commands

**Generate gRPC Code**

```bash
poetry shell
python -m grpc_tools.protoc -I. --python_out=grpc_running_service --grpc_python_out=grpc_running_service running.proto
```
