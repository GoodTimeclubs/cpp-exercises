/*
 * Garage.cpp
 *
 *  Created on: 12.07.2025
 *      Author: bengutzeit
 */

#include "Garage.h"

Garage::~Garage() {
	for(Fahrzeug* f : storage){
		delete f;
	}
}

Garage::Garage(const Garage &other) {
	operator=(other);
}

const std::vector<Fahrzeug*>& Garage::getStorage() const {
	return storage;
}

void Garage::add(Fahrzeug* f) {
	storage.push_back(f);
}

std::ostream& operator <<(std::ostream& out, const Garage& g) {
	for (Fahrzeug* f : g.getStorage()){
		f->print(out);
		out << std::endl;
	}
	return out;
}

void Garage::setStorage(const std::vector<Fahrzeug*> &storage) {
	this->storage = storage;
}

Garage& Garage::operator=(const Garage &other) {
	for(Fahrzeug* f : other.getStorage()){
		storage.push_back(f);
	}
	return *this;
}

