/*
 * Dozent.cpp
 *
 *  Created on: Jul 1, 2025
 *      Author: bengutzeit
 */

#include "Dozent.h"


Dozent::Dozent() {
	vorlesung = strdup("k.A.");
}

Dozent::~Dozent() {
	delete vorlesung;
}

Dozent::Dozent(const char* vorname,const char* nachname, const int& alter, const char* vorlesung):Person(vorname,nachname,alter), vorlesung(nullptr){
	set_vorlesung(vorlesung);
}
Dozent::Dozent(const Dozent& other):Person(other), vorlesung(nullptr){
	set_vorlesung(other.vorlesung);
}
const Dozent& Dozent::operator=(const Dozent& other){
	Person::operator =(other);
	set_vorlesung(other.vorlesung);
	return (*this);
}

void Dozent::set_vorlesung(const char* other){
	if(other != nullptr)vorlesung = strdup(other);
}

void Dozent::ausgabe(){
	Person::ausgabe();
	std::cout << "Vorlesung: " << vorlesung << std::endl;
}
