//
// Created by Daniel Franca on 9/20/16.
//

#include "../include/PizzaHandler.h"

#include <iostream>
#include <vector>

#include <Poco/JSON/Array.h>

using Poco::JSON::Array;

Object::Ptr PizzaHandler::get(HTTPServerRequest &request, HTTPServerResponse &response) {

    std::cerr << "\nFound Get method for Pizza!";

    Object::Ptr data = new Object;
    Array ingredients;
    //bleh... Poco needs a better interface for it
    ingredients.add("basil");
    ingredients.add("tomato");
    ingredients.add("cheese");
    data->set("flavor", "margueritta");
    data->set("ingredients", ingredients);
    data->set("price", 7.5f);

    return data;
}
