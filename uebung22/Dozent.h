/*
 * Dozent.h
 *
 *  Created on: Jul 1, 2025
 *      Author: bengutzeit
 */

#ifndef DOZENT_H_
#define DOZENT_H_

#include "Person.h"

class Dozent : public Person{
private:
	char* vorlesung;
public:
	Dozent();
	virtual ~Dozent();
	Dozent(const char*);
	Dozent(const Dozent&);
	Dozent(const char*, const char*, const int&,const char*);
	const Dozent& operator=(const Dozent& other);

	void set_vorlesung(const char*);
	void ausgabe() override;
};

#endif /* DOZENT_H_ */
