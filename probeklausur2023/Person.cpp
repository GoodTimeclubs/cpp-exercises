/*
 * Person.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Person.h"
#include <iostream>
#include <string.h>


Person::Person():name(nullptr){
	name = strdup("k.A.");
}

Person::Person(char* inName){
	if(inName != nullptr) name = strdup(inName);
}

Person::Person(const Person& other):name(nullptr){
	std::cout << "Kopie nicht möglich";
	Person();
}

Person::~Person() {
	delete name;
}

void Person::print(std::ostream out) const{
	out << name;
}

std::ostream& operator<< (std::ostream& out, const Person& p){
	p.print(out);
	return out;
}
