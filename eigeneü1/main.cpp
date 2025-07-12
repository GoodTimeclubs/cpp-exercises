/*
 * main.cpp
 *
 *  Created on: 09.07.2025
 *      Author: bengutzeit
 */

#include "Fahrzeug.h"
#include "Auto.h"
#include "Fahrrad.h"
#include "Garage.h"

int main(){
	Garage gta;
	gta.add(new Auto ("VW", "Golf", 2003 , 5));
	gta.add(new Fahrrad ("Cube", "Katmandu", 2025 ,true));
	std::cout << gta;
}


