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
    RESTRequestHandlerFactory(RouteMap router):_router(router.begin(), router.end()){};
    HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request);

private:
    RouteMap _router;
};


#endif //REST_RESTREQUESTHANDLERFACTORY_H
