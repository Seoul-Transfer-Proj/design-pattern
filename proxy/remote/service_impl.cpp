#include "service.pb.h"
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>

// 실제 객체 구현
class RealSubjectImpl final : public RealSubject::Service {
    grpc::Status Request(grpc::ServerContext* context, const RequestMessage* request, ResponseMessage* response) override {
        std::string result = "Real subject: Handling request with data: " + request->data();
        response->set_result(result);
        return grpc::Status::OK;
    }
};

void RunServer() {
    std::string serverAddress("0.0.0.0:50051");
    RealSubjectImpl service;

    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();
    grpc::ServerBuilder builder;
    builder.AddListeningPort(serverAddress, grpc::InsecureSeviceCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << serverAddress << std::endl;

    server->Wait();
}

int main() {
    RunServer();
    return 0;
}