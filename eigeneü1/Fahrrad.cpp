/*
 * Fahrrad.cpp
 *
 *  Created on: 11.07.2025
 *      Author: bengutzeit
 */

#include "Fahrrad.h"
#include <iostream>

Fahrrad::Fahrrad(const Fahrrad &other) {
	operator=(other);
}

Fahrrad::Fahrrad(const std::string &hersteller, const std::string &modell,const int &baujahr,const bool& hat_fahrradtraeger)
: Fahrzeug(hersteller,modell,baujahr),hat_gepaecktraeger(hat_fahrradtraeger){}

Fahrrad& Fahrrad::operator=(const Fahrrad &other) {
	Fahrzeug::operator =(other);
	hat_gepaecktraeger = other.hat_gepaecktraeger;
	return *this;

}

void Fahrrad::print(std::ostream &out) {
	Fahrzeug::print(out);

	out << "Hat Gepäckträger: ";

	if(hat_gepaecktraeger){
		out << "ja"<< std::endl;
	}
	else{
		out << "nein"<< std::endl;
	}
}
