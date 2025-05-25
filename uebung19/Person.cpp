/*
 * Person.cpp
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */

#include "Person.h"

int Person::anzahl = 0;

Person::Person(){
	vorname = "k.A.";
	nachname = "k.A.";
	alter = 0;
	groesse_in_cm = 0;
	anzahl++;
}
Person::~Person(){
	anzahl--;
}

std::string Person::get_vorname(){
	return vorname;
}

std::string Person::get_nachname(){
	return nachname;
}

int Person::get_alter(){
	return alter;
}

int Person::get_groesse(){
	return groesse_in_cm;
}

void Person::set_vorname(std::string name){
	vorname = name;
}

void Person::set_nachname(std::string name){
	nachname = name;
}

void Person::set_alter(int alter){
	if (alter >= 0 && alter <= 150) this->alter = alter;
}

void Person::set_groesse(int groesse_in_cm){
	if (groesse_in_cm > 20 && groesse_in_cm <= 280) this->groesse_in_cm = groesse_in_cm;
}

void Person::set_groesse(float groesse_in_m){
	if (groesse_in_m >= 0.2 && groesse_in_m <= 2.8)groesse_in_cm = groesse_in_m * 100;
}

void Person::info(){
	float groesse_in_m = groesse_in_cm /100;
	std::cout << nachname << ", " << vorname << " (" << alter << ") ist " ;
	std::cout << groesse_in_cm/100;
	std::cout << ",";
	std::cout << groesse_in_cm%100;
	std::cout <<"m gross." << std::endl;
}



