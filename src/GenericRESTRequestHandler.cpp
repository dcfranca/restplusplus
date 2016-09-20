//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/GenericRESTRequestHandler.h"


void GenericRESTRequestHandler::handleRequest(HTTPServerRequest& request, HTTPServerResponse& response) {
    std::ostream& ostr = response.send();
    response.setContentType("application/json");

    ostr << "{\"status\": \"OK\"}";

}