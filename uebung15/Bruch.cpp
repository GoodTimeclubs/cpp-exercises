/*
 * Bruch.cpp
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */


#include "Bruch.h"

Bruch::Bruch(){
	zaehler = 0;
	nenner = 1;
}

Bruch::Bruch(int z, int n):zaehler(z),nenner(n){}

Bruch::Bruch(int zahl):zaehler(zahl),nenner(1){}

void Bruch::ausgabe() {
	std::cout << "(" << zaehler << " / " << nenner << ")" << std::endl;
}

void Bruch::kuerzen(){
	int m = 0;
	int n = 0;
	int r = 0;

	m = zaehler;
	n = nenner;

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}

	zaehler = zaehler / m;
	nenner = nenner / m;

	if (nenner < 0) {
	        nenner = nenner * -1;
	        zaehler = zaehler * -1;
	}
}
Bruch Bruch::multiplizieren(Bruch B2) {
	auto temp = new Bruch;
	temp->zaehler = zaehler * B2.zaehler;
	temp->nenner = nenner * B2.nenner;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::multiplizieren(int zahl) {
	Bruch* temp = new Bruch;
	temp->zaehler = zaehler * zahl;
	temp->nenner = nenner;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::dividieren(Bruch B2) {
	auto temp = new Bruch;
	temp->zaehler = zaehler * B2.nenner;
	temp->nenner = nenner * B2.zaehler;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::dividieren(int zahl) {
	auto temp = new Bruch;
	temp->zaehler = zaehler;
	temp->nenner = nenner * zahl;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::addieren(Bruch B2) {
	auto temp = new Bruch;
	temp->zaehler = (zaehler * B2.nenner) + (B2.zaehler*nenner);
	temp->nenner = nenner * B2.nenner;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::addieren(int zahl) {
	auto temp = new Bruch;
	temp->zaehler = zaehler + (zahl*nenner);
	temp->nenner = nenner;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::subtrahieren(Bruch B2) {
	auto temp = new Bruch;
	temp->zaehler = (zaehler * B2.nenner) - (B2.zaehler*nenner);
	temp->nenner = nenner * B2.nenner;
	temp->kuerzen();
	return *temp;
}

Bruch Bruch::subtrahieren(int zahl) {
	auto temp = new Bruch;
	temp->zaehler = zaehler - (zahl*nenner);
	temp->nenner = nenner;
	temp->kuerzen();
	return *temp;
}



//multiplizieren
//Dividieren
//Addieren
//subtrahieren
//Kürzen


