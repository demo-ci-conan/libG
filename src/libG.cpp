
#include "libG/libG.h"

#include <iostream>
#include "libA/libA.h"

void hello_libG(int indent, const std::string& msg) {
    std::cout << std::string(indent, ' ') << "libG: " << msg << std::endl;
    hello_libA(indent+1, "hello from libG");
}