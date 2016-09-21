//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/BaseRESTRequestHandler.h"
#include <iostream>

void BaseRESTRequestHandler::handleRequest(HTTPServerRequest& request, HTTPServerResponse& response) {
    response.setContentType("application/json");
    if (request.getMethod() == "GET") {
        std::cerr << "\nFound Get method";
        this->get(request, response);
    }
    else if (request.getMethod() == "POST") {
        this->post(request, response);
    }
    else if (request.getMethod() == "PUT") {
        this->put(request, response);
    }
    else if (request.getMethod() == "DELETE") {
        this->put(request, response);
    }
}

void BaseRESTRequestHandler::get(HTTPServerRequest &request, HTTPServerResponse &response) {
    std::cerr << "\nBase GET WRONG ****\n";
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
}

void BaseRESTRequestHandler::post(HTTPServerRequest &request, HTTPServerResponse &response) {
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
}

void BaseRESTRequestHandler::put(HTTPServerRequest &request, HTTPServerResponse &response) {
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
}

void BaseRESTRequestHandler::del(HTTPServerRequest &request, HTTPServerResponse &response) {
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
}


/*
 * route => std::unordered_map
 * url -> class
 * class must implement or get/post/put and inherit BaseRestRequestHandler
 * the router is made by the factory
 */