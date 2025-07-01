/*
 * Mitarbeiter.cpp
 *
 *  Created on: Jul 1, 2025
 *      Author: bengutzeit
 */

#include "Mitarbeiter.h"

Mitarbeiter::Mitarbeiter() {
	personalnummer = 0;
}

Mitarbeiter::~Mitarbeiter() = default;

Mitarbeiter::Mitarbeiter(const char* vorname,const char* nachname, const int& alter, const int& personalnummer):Person(vorname,nachname,alter), personalnummer(personalnummer) {}


void Mitarbeiter::set_personalnummer(const int& personalnummer){
	if(personalnummer != 0) this->personalnummer = personalnummer;
}

void Mitarbeiter::ausgabe(){
	Person::ausgabe();
	std::cout << "Personalnummer: " << personalnummer << std::endl;
}
