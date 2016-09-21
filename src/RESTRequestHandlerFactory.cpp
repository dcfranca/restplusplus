//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/RESTRequestHandlerFactory.h"
#include "../include/BaseRESTRequestHandler.h"

#include <typeinfo>
#include <iostream>

HTTPRequestHandler* RESTRequestHandlerFactory::createRequestHandler(const HTTPServerRequest& request) {

    std::cerr << "\nReceived request for: " << request.getURI();

    if (this->_router.find(request.getURI()) != this->_router.end()) {

        std::cerr << "\nRequest Handler found!\n";
        return this->_router[request.getURI()];
    }

    return new BaseRESTRequestHandler();
}