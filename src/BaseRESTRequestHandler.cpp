//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/BaseRESTRequestHandler.h"
#include <iostream>

void BaseRESTRequestHandler::handleRequest(HTTPServerRequest& request, HTTPServerResponse& response) {
    response.setContentType("application/json");
    Object::Ptr responseData;
    std::ostringstream& ostr = (std::ostringstream&)response.send();
    if (request.getMethod() == "GET") {
        std::cerr << "\nFound Get method";
        responseData = this->get(request, response);
    }
    else if (request.getMethod() == "POST") {
        responseData = this->post(request, response);
    }
    else if (request.getMethod() == "PUT") {
        responseData = this->put(request, response);
    }
    else if (request.getMethod() == "DELETE") {
        responseData = this->put(request, response);
    }
    responseData->stringify(ostr);
}

Object::Ptr BaseRESTRequestHandler::get(HTTPServerRequest &request, HTTPServerResponse &response) {
    std::cerr << "\nBase GET WRONG ****\n";
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
    return new Object;
}

Object::Ptr BaseRESTRequestHandler::post(HTTPServerRequest &request, HTTPServerResponse &response) {
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
    return new Object;
}

Object::Ptr BaseRESTRequestHandler::put(HTTPServerRequest &request, HTTPServerResponse &response) {
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
    return new Object;
}

Object::Ptr BaseRESTRequestHandler::del(HTTPServerRequest &request, HTTPServerResponse &response) {
    response.setStatus("405");
    std::ostream& ostr = response.send();
    ostr << "Method not allowed";
    return new Object;
}
