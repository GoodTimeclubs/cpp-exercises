/*
 * Produkt.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef PRODUKT_H_
#define PRODUKT_H_

#include "Preis.h"
#include <iostream>

template<typename T> class Produkt {
private:
	T bezeichnung;
	Preis preis;
	Produkt<T>() = delete; //Verbieten
public:
	Produkt<T>(T,unsigned int, unsigned int);
	virtual ~Produkt<T>() = default;

	void set_price(unsigned int,unsigned int);
	Preis get_price();
	void print(std::ostream&);
	template <typename U> friend std::ostream& operator<<(std::ostream&, const Produkt<U>&);
};

#endif /* PRODUKT_H_ */
