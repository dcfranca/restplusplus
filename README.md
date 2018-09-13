# REST++

### What's that?
A small proof-of-concept of C++ REST Framework running on top of [Poco](https://pocoproject.org/).

### How to use
There' a small example of how to use it on *main.cpp*

``` c++
#include "../include/RESTServerApplication.h"
#include "../include/PizzaHandler.h"

int main(int argc, char** argv) {

    std::cerr << "\nStarting server...";

    RouteMap router = {
            {"/pizza", handler<PizzaHandler>()}
    };

    RESTServerApplication app{router};
    return app.run(argc, argv);
}
```

The basic functionalities is pretty simple.

`RESTServerApplication` has a constructor that receives a router and port (default to 8080) 

### What's the Router param?

The Router param is an associative array with they keys being the URI and the value being a handler for that URI.

### How to define a handler

You just need to subclass `BaseRESTRequestHandler` and implement the method corresponding to the HTTP method you want to respond to.
This method receives a request and response objects and return a `Poco::JSON::Object`

Possible methods: get, post, put, delete

From the Pizza example:
``` c++
#include <Poco/JSON/Array.h>

using Poco::JSON::Array;

Object::Ptr PizzaHandler::get(HTTPServerRequest &request, HTTPServerResponse &response) {

    Object::Ptr data = new Object;
    Array ingredients;

    ingredients.add("basil");
    ingredients.add("tomato");
    ingredients.add("cheese");
    data->set("flavor", "margueritta");
    data->set("ingredients", ingredients);
    data->set("price", 7.5f);

    return data;
}
```
