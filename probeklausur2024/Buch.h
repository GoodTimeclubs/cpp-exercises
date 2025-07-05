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

template <typename T> class Buch : Produkt<T> {
private:
	MyString bezeichnung;
	int seitenanzahl;
public:


	Buch();
	Buch(const MyString&,const int&,const int&, const int&);
	Buch(Buch&);
	Buch& operator=(const Buch&)const;

	void print_b(std::ostream&);
	template<typename U> friend std::ostream& operator<<(std::ostream&, const Buch<U>&);

	virtual ~Buch();
};

#endif /* BUCH_H_ */
