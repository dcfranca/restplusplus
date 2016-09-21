//
// Created by Daniel Franca on 9/20/16.
//

#ifndef REST_RESTREQUESTHANDLERFACTORY_H
#define REST_RESTREQUESTHANDLERFACTORY_H

#include "Poco/Net/HTTPRequestHandlerFactory.h"
#include "Poco/Net/HTTPRequestHandler.h"
#include "Poco/Net/HTTPServerRequest.h"

#include "BaseRESTRequestHandler.h"

#include <unordered_map>

using Poco::Net::HTTPRequestHandlerFactory;
using Poco::Net::HTTPRequestHandler;
using Poco::Net::HTTPServerRequest;

class RESTRequestHandlerFactory : public HTTPRequestHandlerFactory {

public:
    RESTRequestHandlerFactory(std::unordered_map<std::string, BaseRESTRequestHandler* > router):_router(router){};
    HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request);

private:
    std::unordered_map<std::string, BaseRESTRequestHandler* > _router;
};


#endif //REST_RESTREQUESTHANDLERFACTORY_H
