/*
 * Student.cpp
 *
 *  Created on: Jul 1, 2025
 *      Author: bengutzeit
 */

#include "Student.h"

Student::Student() {
	matrikelnummer = strdup("k.A.");
}

Student::~Student() {
	delete matrikelnummer;
}

Student::Student(const char* vorname,const char* nachname, const int& alter, const char* matrikelnummer):Person(vorname,nachname,alter), matrikelnummer(nullptr){
	set_matrikelnummer(matrikelnummer);
}
Student::Student(const Student& other):Person(other), matrikelnummer(nullptr){
	set_matrikelnummer(matrikelnummer);
}

const Student& Student::operator=(const Student& other){
	Person::operator =(other);
	set_matrikelnummer(other.matrikelnummer);
	return (*this);
}

void Student::set_matrikelnummer(const char* other){
	if(other != nullptr) matrikelnummer = strdup(other);
}

void Student::ausgabe(){
	Person::ausgabe();
	std::cout << "Matrikelnummer: " << matrikelnummer << std::endl;
}
