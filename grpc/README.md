### Commands

**Generate gRPC Code**

```bash
poetry shell
python -m grpc_tools.protoc -I. --python_out=. --grpc_python_out=. running.proto
```
