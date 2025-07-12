/*
 * Fahrzeug.cpp
 *
 *  Created on: 09.07.2025
 *      Author: bengutzeit
 */

#include "Fahrzeug.h"
#include <iostream>
#include <string.h>

Fahrzeug::Fahrzeug():hersteller("k.A."), modell("k.A."),baujahr(0){}


Fahrzeug& Fahrzeug::operator=(const Fahrzeug& other){
	this->baujahr = other.baujahr;
	this->hersteller = other.hersteller;
	this->modell = other.modell;
	return *this;

}

Fahrzeug::Fahrzeug(const Fahrzeug &other) {
	operator=(other);
}

Fahrzeug::Fahrzeug(std::string hersteller, std::string modell, int baujahr)
:hersteller(hersteller), modell(modell), baujahr(baujahr){

}

void Fahrzeug::print(std::ostream& out) {
	out << "Fahrzeugausgabe: " << std::endl;
	out << "Hersteller: " << hersteller << std::endl;
	out << "Modell: " << modell << std::endl;
	out << "Baujahr: " << baujahr << std::endl;
}
