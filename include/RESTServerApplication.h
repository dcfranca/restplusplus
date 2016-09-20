//
// Created by Daniel Franca on 9/20/16.
//

#ifndef REST_RESTSERVERAPPLICATION_H
#define REST_RESTSERVERAPPLICATION_H

#include "Poco/Util/ServerApplication.h"

using Poco::Util::ServerApplication;

class RESTServerApplication: public ServerApplication {
protected:
    int main(const std::vector<std::string>& args);
};


#endif //REST_RESTSERVERAPPLICATION_H
