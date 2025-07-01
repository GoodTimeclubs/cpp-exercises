/*
 * Mitarbeiter.h
 *
 *  Created on: Jul 1, 2025
 *      Author: bengutzeit
 */

#ifndef MITARBEITER_H_
#define MITARBEITER_H_

#include "Person.h"

class Mitarbeiter : public Person {
private:
	int personalnummer;
public:
	Mitarbeiter();
	virtual ~Mitarbeiter();
	Mitarbeiter(const char*, const char*,const int&,const int&);

	void set_personalnummer(const int&);
	void ausgabe();
};

#endif /* MITARBEITER_H_ */
