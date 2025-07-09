/*
 * Buch.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef BUCH_H_
#define BUCH_H_

#include "Produkt.h"
#include "MyString.h"
#include <iostream>

template <typename T> class Buch : public Produkt<T> {
private:
	MyString bezeichnung;
	int seitenanzahl;
public:


	Buch():bezeichnung("Ohne Titel"), seitenanzahl(0){
		Produkt<T>::set_price(0,0);
	}

	Buch(MyString name, const int& seiten,const int& euro, const int& cent)
	:Produkt<T>(name, euro, cent),bezeichnung((char*)"none"){
		bezeichnung = name;
		if (seiten >= 0) seitenanzahl = seiten;
	}


	inline Buch(Buch &buch):bezeichnung("Ohne Titel"), seitenanzahl(0){
		operator=(buch);
	}


	inline Buch<T>& operator =(const Buch &buch) {
		bezeichnung = buch.bezeichnung;
		seitenanzahl = buch.seitenanzahl;
		set_price(buch.get_price());
		return buch;
	}

	void print(std::ostream& out) override{
		out << "Es folgt die Buchbeschreibung:" <<std::endl;
		Produkt<T>::print(out);
		out << "Seiten: " << seitenanzahl << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, Buch<T>& b){
		b.print(out);
		return out;
	}

	virtual ~Buch() {
		// TODO Auto-generated destructor stub
	}
};

#endif /* BUCH_H_ */
