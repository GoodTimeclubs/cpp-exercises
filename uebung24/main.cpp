#include <iostream>
#include "List.h"
int main() {
    List l1;

    l1+30;
    l1+1;
    l1+2;
    l1+9;
    l1+4;
    l1+5;

    std::cout << l1 << "Das war l1" << std::endl;

    return 0;
}
