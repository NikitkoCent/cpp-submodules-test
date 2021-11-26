#include "func.h"
#include <iostream>


int main(int argc, char* argv[]) {
    int a;
    int b;

    std::cin >> a >> b;

    std::cout << "myfunc::sum(a, b): " << myfunc::sum(a, b) << std::endl;

    return 0;
}