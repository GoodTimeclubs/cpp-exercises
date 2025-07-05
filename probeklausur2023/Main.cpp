/*
 * Main.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */
#include "Person.h"
#include "Gast.h"
#include "Vip.h"
#include "Party.h"
#include <iostream>

int main(){

	Person* g1 = new Gast((char*)"Paula Partygirl", 1);
	Person* g2 = new Gast((char*)"Simon Supersimp", 100);
	Person* p1 = new Person((char*)"kek man");
	Person* v1 = new Vip((char*)"Ina Influcencer");

	Party party1;
	party1.hereinlassen(g1);
	party1.hereinlassen(g2);
	party1.hereinlassen(p1);
	party1.hereinlassen(v1);

	std::cout << party1;


	delete(g1);
	delete(g2);
	delete(v1);
	return 0;
}

