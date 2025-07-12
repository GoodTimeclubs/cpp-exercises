/*
 * Auto.cpp
 *
 *  Created on: 11.07.2025
 *      Author: bengutzeit
 */

#include "Auto.h"


Auto::Auto(const Auto &other) {
	operator=(other);
}

Auto::Auto(const std::string& hersteller, const std::string& modell, const int& baujahr,const int& anzahlTueren)
:Fahrzeug(hersteller,modell,baujahr), anzahlTueren(anzahlTueren){}

Auto& Auto::operator=(const Auto &other) {
	hersteller = other.hersteller;
	modell = other.hersteller;
	baujahr = other.baujahr;
	anzahlTueren = other.anzahlTueren;
	return *this;
}

void Auto::print(std::ostream& out) {
	Fahrzeug::print(out);
	out << "Anzahl Türen: " << anzahlTueren << std::endl;

}
