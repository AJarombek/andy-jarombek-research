from concurrent import futures

import grpc

from grpc_running_service import running_pb2_grpc, running_pb2


class RunningMileageService(running_pb2_grpc.RunningServicer):
    def GetUserWeeklyMileage(self, request, context):
        # Example implementation; in a real scenario, you'd query a database or another data source
        weekly_mileages = [
            running_pb2.WeeklyMileage(week="2024-W01", mileage=10.0),
            running_pb2.WeeklyMileage(week="2024-W02", mileage=15.0),
        ]
        return running_pb2.WeeklyMileageResponse(mileages=weekly_mileages)


def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    running_pb2_grpc.add_RunningServicer_to_server(RunningMileageService(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    server.wait_for_termination()


if __name__ == '__main__':
    serve()
