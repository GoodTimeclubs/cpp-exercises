/*
 * Buch.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Buch.h"
#include <string.h>
#include <iostream>

template <typename T> Buch<T>::Buch():bezeichnung("Ohne Titel"), seitenanzahl(0){
	Produkt<T>::set_price(0,0);
}

template <typename T> Buch<T>::Buch(const MyString& name, const int& seiten,const int& euro, const int& cent)
: Produkt<T>(name, euro , cent){
	bezeichnung = name;
	seitenanzahl = 0;
	if (seiten >= 0) seitenanzahl = seiten;
}

template<typename T>
inline Buch<T>::Buch(Buch &buch):bezeichnung("Ohne Titel"), seitenanzahl(0){
	operator=(buch);
}

template<typename T>
inline Buch<T>& Buch<T>::operator =(const Buch &buch) const{
	bezeichnung = buch.bezeichnung;
	seitenanzahl = buch.seitenanzahl;
	Produkt<T>::preis = buch.preis;
	return buch;
}

template<typename T> void Buch<T>::print_b(std::ostream& out){
	out << "Es folgt die Buchbeschreibung:" <<std::endl;
	Produkt<T>::print(out);
	out << "Seiten: " << seitenanzahl << std::endl;
}

template<typename U> std::ostream& operator<<(std::ostream& out, Buch<U>& b){
	b.print_b(out);
	return out;
}

template <typename T> Buch<T>::~Buch() {
	// TODO Auto-generated destructor stub
}

