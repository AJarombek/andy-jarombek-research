import os
from concurrent import futures

import grpc

from grpc_running_service import running_pb2, running_pb2_grpc


class RunningMileageService(running_pb2_grpc.RunningServicer):
    def GetUserWeeklyMileage(self, request, context):  # noqa: N802
        weekly_mileages = [
            running_pb2.WeeklyMileage(week="2024-W01", mileage=10.0),
            running_pb2.WeeklyMileage(week="2024-W02", mileage=15.0),
        ]
        return running_pb2.WeeklyMileageResponse(mileages=weekly_mileages)


def serve():
    host = "[::]:50051"

    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    running_pb2_grpc.add_RunningServicer_to_server(RunningMileageService(), server)
    server.add_insecure_port(host)
    server.start()
    print(f"Server started at {host}")

    server.wait_for_termination()


if __name__ == "__main__":
    serve()
