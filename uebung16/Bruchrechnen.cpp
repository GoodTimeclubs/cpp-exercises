/*
 * Bruchrechnen.cpp
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */

#include "Bruch.h"
#include <iostream>

int main() {
    Bruch B1(20,40);
    Bruch B2(2,4);

    if(B1<B2) std::cout << "< is true" << std::endl; else std::cout << "< is false" << std::endl;
    if(B1>B2) std::cout << "> is true" << std::endl; else std::cout << "> is false" << std::endl;
    if(B1==B2) std::cout << "== is true" << std::endl; else std::cout << "== is false" << std::endl;
    if(B1!=B2) std::cout << "!= is true" << std::endl; else std::cout << "!= is false" << std::endl;
    if(B1<=B2) std::cout << "<= is true" << std::endl; else std::cout << "<= is false" << std::endl;
    if(B1>=B2) std::cout << ">= is true" << std::endl; else std::cout << ">= is false" << std::endl;


}
