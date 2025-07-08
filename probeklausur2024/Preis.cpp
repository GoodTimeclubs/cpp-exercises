/*
 * Preis.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Preis.h"

Preis::Preis() {
	euro = 0;
	cent = 0;
}

Preis::Preis(unsigned int euro,unsigned int cent):euro(euro), cent(cent){};

void Preis::set_price(unsigned int euro, unsigned int cent){
	this->euro = euro;
	this->cent = cent;
}

Preis::Preis(double input):euro(0), cent(0){
	if (input >= 0)operator=(input);
	else throw std::invalid_argument("Der Preis darf nicht negativ sein!");

}

Preis::Preis(const Preis& other):euro(other.euro), cent(other.cent){}

const Preis& Preis::operator=(const Preis& other){
	euro = other.euro;
	cent = other.cent;
	return *this;
}
const Preis& Preis::operator=(double other){
	if (other < 0) throw std::invalid_argument("Der Preis darf nicht negativ sein!");
	euro = other/1;
	cent = (other-euro)*100;
	return *this;
}

Preis::operator double(){
	double out = cent;
	out = out /100;
	out = out + euro;
	return out;
}
Preis::~Preis()= default;


std::ostream& operator<< (std::ostream& out, const Preis& data){

	double eplus = data.cent;
	eplus = eplus /100;
	int euro = (int)eplus + data.euro;
	int cent = data.cent - ((int)eplus * 100);

	if (cent >= 10) {
		out << euro<< ","<< cent<< " €";
	}
	else out << euro << ",0" << cent << " €";


	return out;
}

