#include "../include/RESTServerApplication.h"
#include <iostream>


int main(int argc, char** argv) {

    std::cout << "Starting server...";

    RESTServerApplication app;

    return app.run(argc, argv);
}