//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/PizzaHandler.h"

#include <iostream>

void PizzaHandler::get(HTTPServerRequest &request, HTTPServerResponse &response) {

    std::cerr << "\nFound Get method for Pizza!";

    std::ostream& ostr = response.send();

    ostr << "{\"flavor\": \"Pepperoni\"}";
}
