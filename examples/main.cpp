#include <iostream>

#include "boilerplate/Example.h"

int main() {
    boilerplate::Example example = boilerplate::Example();

    std::cout << example.Variable();
    return 0;
}