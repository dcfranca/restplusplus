//
// Created by Daniel Franca on 9/20/16.
//

#ifndef REST_PIZZAHANDLER_H
#define REST_PIZZAHANDLER_H

#include "../include/BaseRESTRequestHandler.h"


class PizzaHandler: public BaseRESTRequestHandler {

public:
    PizzaHandler():BaseRESTRequestHandler(){};
    Object::Ptr get(HTTPServerRequest &request, HTTPServerResponse &response) override;

};


#endif //REST_PIZZAHANDLER_H
