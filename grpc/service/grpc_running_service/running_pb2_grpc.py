# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import running_pb2 as running__pb2


class RunningStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.GetUserWeeklyMileage = channel.unary_unary(
                '/running.Running/GetUserWeeklyMileage',
                request_serializer=running__pb2.WeeklyMileageRequest.SerializeToString,
                response_deserializer=running__pb2.WeeklyMileageResponse.FromString,
                )


class RunningServicer(object):
    """Missing associated documentation comment in .proto file."""

    def GetUserWeeklyMileage(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_RunningServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'GetUserWeeklyMileage': grpc.unary_unary_rpc_method_handler(
                    servicer.GetUserWeeklyMileage,
                    request_deserializer=running__pb2.WeeklyMileageRequest.FromString,
                    response_serializer=running__pb2.WeeklyMileageResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'running.Running', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class Running(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def GetUserWeeklyMileage(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/running.Running/GetUserWeeklyMileage',
            running__pb2.WeeklyMileageRequest.SerializeToString,
            running__pb2.WeeklyMileageResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)