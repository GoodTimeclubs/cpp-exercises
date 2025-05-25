/*
 * main.cpp
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */

#include "Person.h"

int main(){
	Person p1;

	std::cout << "Vorname:";
	std::string vorname;
	std::cin >> vorname;
	p1.set_vorname(vorname);

	std::cout << "Nachname:";
	std::string nachname;
	std::cin >> nachname;
	p1.set_nachname(nachname);

	std::cout << "Alter:";
	int alter;
	std::cin >> alter;
	p1.set_alter(alter);

	//std::cout << "Groesse in Centimentern:";
	float groesse = 1.80;
	//std::cin >> groesse;
	p1.set_groesse(groesse);

	p1.info();
}

