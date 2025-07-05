/*
 * Gast.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef GAST_H_
#define GAST_H_

#include "Person.h"

class Gast : public Person{
private:
	double eintrittspreis;
	void eintrittsBenachrichtigung();
	void verlassensBenachrichtigung();
public:
	Gast();
	Gast(char* , double);
	virtual ~Gast();
	void print(std::ostream&) const override;

	friend std::ostream& operator<< (std::ostream&, Gast&);
};

#endif /* GAST_H_ */
