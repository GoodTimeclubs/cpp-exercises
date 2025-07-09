/*
 * Elektronik.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef ELEKTRONIK_H_
#define ELEKTRONIK_H_
#include "Produkt.h"
#include "MyString.h"
#include <iostream>

template <typename T> class Elektronik : public Produkt<T> {
private:
	MyString bezeichnung;

public:
	Elektronik() = delete;
	Elektronik(const MyString& bezeichnung, const unsigned int& euro, const unsigned int& cent)
	:bezeichnung(bezeichnung),Produkt<T>(bezeichnung,euro,cent){
	}

	Elektronik(const Elektronik& other){
		operator=(other);
	}

	Elektronik& operator= (const Elektronik& other){
		this->bezeichnung = other.bezeichnung;
		this->preis = other.preis;
		return *this;
	}
	virtual ~Elektronik() = default;

	void print(std::ostream& out){
		out << "Es folgt die Artikelbeschreibung: " << std::endl;
		Produkt<T>::print(out);
	}

	friend std::ostream& operator<<(std::ostream& out, Elektronik& other){
		other.print(out);
		return out;
	}
};

#endif /* ELEKTRONIK_H_ */
