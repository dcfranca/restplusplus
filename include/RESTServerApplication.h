//
// Created by Daniel Franca on 9/20/16.
//

#ifndef REST_RESTSERVERAPPLICATION_H
#define REST_RESTSERVERAPPLICATION_H

#include "Poco/Util/ServerApplication.h"
#include "BaseRESTRequestHandler.h"

#include <unordered_map>
#include <memory>

using Poco::Util::ServerApplication;

class RESTServerApplication: public ServerApplication {
public:
    RESTServerApplication(RouteMap router, unsigned int port=8080):
            _router(router), _port(port){};

protected:
    int main(const std::vector<std::string>& args);

private:
    RouteMap _router;
    unsigned int _port;
};


#endif //REST_RESTSERVERAPPLICATION_H
