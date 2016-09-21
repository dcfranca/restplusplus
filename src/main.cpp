#include "../include/RESTServerApplication.h"
#include "../include/PizzaREST.h"
#include <iostream>
#include <memory>
#include <unordered_map>


int main(int argc, char** argv) {

    std::cerr << "\nStarting server...";

    std::unordered_map<std::string, BaseRESTRequestHandler* > router =
            {{"/pizza", new PizzaREST()}};

    RESTServerApplication app{router};

    return app.run(argc, argv);
}