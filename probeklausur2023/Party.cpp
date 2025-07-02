/*
 * Party.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Party.h"


Party::Party() = default;

Party::~Party() = default;

void Party::hereinlassen(Person* p){
	gästeliste.push_back(p);
}


std::ostream& operator<< (std::ostream& out, Party& p){

	out << "Auf der Party sind folgende " << p.get_size() << " Personen:" << std::endl;
	for (Person* &leute : p.gästeliste){
		leute->print();
		out << std::endl;
	}
	return out;
}

int Party::get_size(){
	return (int)gästeliste.size();
}
