/*
 * Vip.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Vip.h"

Vip::Vip() = default;
Vip::~Vip() = default;

Vip::Vip(char* name):Person(name){}

void Vip::print(std::ostream& out) const{
	std::cout << get_name() << " (VIP) ";
}

std::ostream& operator<< (std::ostream& out, const Vip& vip){
	vip.print(out);
	return out;
}
