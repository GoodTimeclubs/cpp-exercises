/*
 * Gast.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Gast.h"
#include <iostream>

Gast::Gast():eintrittspreis(0){
	eintrittsBenachrichtigung();
}

Gast::Gast(char* name, double preis):Person(name), eintrittspreis(0){
	if(preis >= 0) eintrittspreis = preis;
	eintrittsBenachrichtigung();
}

Gast::~Gast(){
	verlassensBenachrichtigung();
}

void Gast::eintrittsBenachrichtigung(){
	std::cout << dynamic_cast<const Person&>(*this) << " hat für " << eintrittspreis << " Euro den Laden betreten." << std::endl;
}

void Gast::verlassensBenachrichtigung(){
	std::cout << dynamic_cast<const Person&>(*this) << " hat den Laden wieder verlassen." << std::endl;
}

void Gast::print(std::ostream& out) const {
	out << get_name() << " " << eintrittspreis <<"€ " << nullptr;
}

std::ostream& operator<< (std::ostream& out,const Gast& g){
	g.print(out);
	return out;
}
