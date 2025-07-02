/*
 * Preis.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef PREIS_H_
#define PREIS_H_
#include <iostream>

class Preis {
private:
	unsigned int euro;
	unsigned int cent;
public:
	Preis();
	Preis(unsigned int,unsigned int);
	Preis(double);
	Preis(const Preis&);

	const Preis& operator=(const Preis&);
	const Preis& operator=(double);
	operator double();
	virtual ~Preis();

	friend std::ostream& operator<< (std::ostream&, const Preis&);
};

#endif /* PREIS_H_ */
