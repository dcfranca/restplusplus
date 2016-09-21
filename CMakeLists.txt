cmake_minimum_required(VERSION 3.6)
project(REST__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include(.conan/conanbuildinfo.cmake)
conan_basic_setup()

set(SOURCE_FILES
    src/main.cpp src/RESTRequestHandlerFactory.cpp src/BaseRESTRequestHandler.cpp src/RESTServerApplication.cpp src/PizzaREST.cpp include/PizzaREST.h)

add_executable(REST__ ${SOURCE_FILES})

target_link_libraries(REST__ ${CONAN_LIBS})