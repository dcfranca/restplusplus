//
// Created by Daniel Franca on 9/20/16.
//

#ifndef REST_PIZZAREST_H
#define REST_PIZZAREST_H

#include "../include/BaseRESTRequestHandler.h"


class PizzaREST: public BaseRESTRequestHandler {

public:
    void get(HTTPServerRequest &request, HTTPServerResponse &response) override;

};


#endif //REST_PIZZAREST_H
