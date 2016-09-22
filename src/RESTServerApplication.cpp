//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/RESTServerApplication.h"
#include "../include/RESTRequestHandlerFactory.h"

#include "Poco/Net/ServerSocket.h"
#include "Poco/Net/HTTPServer.h"
#include "Poco/Util/Application.h"
#include "Poco/Net/HTTPServerParams.h"

using Poco::Net::ServerSocket;
using Poco::Net::HTTPServer;
using Poco::Net::HTTPServerParams;
using Poco::Util::Application;

int RESTServerApplication::main(const std::vector<std::string>& args) {
    ServerSocket svs(this->_port);
    HTTPServer srv(new RESTRequestHandlerFactory(this->_router),
                   svs, new HTTPServerParams());
    srv.start();
    waitForTerminationRequest();
    srv.stop();

    return Application::EXIT_OK;
}