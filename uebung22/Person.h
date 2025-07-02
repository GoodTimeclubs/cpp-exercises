/*
 * Person.h
 *
 *  Created on: 24.05.2025
 *      Author: bengutzeit
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string.h>
#include <compare>

class Person {
private:
	char* vorname;
	char* nachname;
	int alter;
public:
	Person();
	virtual ~Person();
	Person(const char*, const char*, const int&);
	Person(const Person&);

	void set_vorname(const char*);
	void set_nachname(const char*);
	void set_alter(int);
	virtual void ausgabe();

	Person& operator=(const Person&);
	bool operator==(const Person&);
	bool operator!=(const Person&);
	bool operator<=(const Person&);
	bool operator>=(const Person&);
	bool operator<(const Person&);
	bool operator>(const Person&);
};

#endif /* PERSON_H_ */
