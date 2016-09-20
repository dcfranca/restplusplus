//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/RESTRequestHandlerFactory.h"
#include "../include/GenericRESTRequestHandler.h"

HTTPRequestHandler*  RESTRequestHandlerFactory::createRequestHandler(const HTTPServerRequest& request) {
    if (request.getURI() == "/") {
        return new GenericRESTRequestHandler();
    }

    return new GenericRESTRequestHandler();
}