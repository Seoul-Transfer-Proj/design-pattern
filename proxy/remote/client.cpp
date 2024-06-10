#include "hello_service.grpc.pb.h"
#include <grpcpp/grpcpp.h>

int main() {
    std::string serverAddress("localhost:50051");
    std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel(serverAddress, grpc::InsecureChannelCredentials());
    std::unique_ptr<HelloService::Stub> stub = HelloService::NewStub(channel);

    HelloRequest request;
    HelloReply reply;
    grpc::ClientContext context;

    grpc::Status status = stub->SayHello(&context, request, &reply);

    if (status.ok()) {
        std::cout << "Server response: " << reply.message() << std::endl;
    } else {
        std::cout << "Error: " << status.error_message() << std::endl;
    }

    return 0;
}