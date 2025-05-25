/*
 * Person.cpp
 *
 *  Created on: 24.05.2025
 *      Author: bengutzeit
 */

#include "Person.h"

Person::Person(){
	vorname = strdup("k.A.");
	nachname = strdup("k.A.");
	alter = 0;
}

Person::Person(const char* vorname,const char* nachname, int alter){
	set_vorname(vorname);
	set_nachname(nachname);
	set_alter(alter);
}

Person::Person(const Person& other){
	set_vorname(other.vorname);
	set_nachname(other.nachname);
	set_alter(other.alter);
}

Person::~Person(){
	delete vorname;
	delete nachname;
}


void Person::set_alter(int input){
	if(input > 0 && input < 120) alter = input;
	else alter = 0;
}

void Person::set_vorname(const char* other){
	if (other != NULL) {
		vorname = strdup(other);
	}
	else{
		vorname = strdup("k.A.");
	}
}

void Person::set_nachname(const char* other){
	if (other != NULL) {
		nachname = strdup(other);
	}
	else{
		nachname = strdup("k.A.");
	}
}

void Person::ausgabe(){
	std::cout << vorname << ", " << nachname << " (" << alter << ") " << std::endl;
}


Person& Person::operator=(const Person& other){
	delete this->vorname;
	delete this->nachname;
	set_vorname(other.vorname);
	set_nachname(other.nachname);
	set_alter(other.alter);
	return *this;
}

bool Person::operator==(const Person& other){
	if(strcmp(this->nachname, other.nachname) != 0) return false;
	if(strcmp(this->vorname, other.vorname) != 0) return false;
	if(this->alter != other.alter) return false;
	return true;
}

bool Person::operator!=(const Person& other){
	if(operator==(other)) return false;
	return true;
}

bool Person::operator<(const Person& other){
	if(strcmp(this->nachname, other.nachname) > 0) {
		std::cout << "strcmp = " << strcmp(this->nachname, other.nachname) << std::endl;
		return false;
	}
	if(strcmp(this->vorname, other.vorname) > 0) {
		std::cout << "strcmp = " << strcmp(this->vorname, other.vorname) << std::endl;
		return false;
	}
	return true;
}

bool Person::operator>(const Person& other){
	if(strcmp(this->nachname, other.nachname) < 0) return false;
	if(strcmp(this->vorname, other.vorname) < 0) return false;
	return true;
}

bool Person::operator<=(const Person& other){
	if(operator<(other) || operator==(other)) return true;
	return false;
}

bool Person::operator>=(const Person& other){
	if(operator>(other) || operator==(other)) return true;
	return false;
}
