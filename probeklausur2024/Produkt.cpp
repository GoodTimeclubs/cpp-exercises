/*
 * Produkt.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "Produkt.h"
#include "Preis.h"

template <typename T> Produkt<T>::Produkt(T name,unsigned int euro, unsigned int cent)
	:bezeichnung((char*)"none"), preis(0,0){
	set_price(euro,cent);
	bezeichnung = name;
}

template <typename T> void Produkt<T>::print(std::ostream& out){
	out << "Bezeichnung: " << bezeichnung << std::endl << "Preis: " << preis << std::endl;
}


template <typename T> std::ostream& operator<<(std::ostream& out, const Produkt<T>& prod){
	prod.print(out);
	return out;
}

template <typename T> void Produkt<T>::set_price(unsigned int euro, unsigned int cent){
	preis.set_price(euro,cent);
}

template <typename T> Preis Produkt<T>::get_price(){
	return preis;
}
