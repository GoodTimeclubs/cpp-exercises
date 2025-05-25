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
	~Person();
	Person(const char*, const char*, int);
	Person(const Person&);

	void set_vorname(const char*);
	void set_nachname(const char*);
	void set_alter(int);
	void ausgabe();

	Person& operator=(const Person&);
	bool operator==(const Person&); //TODO implement
	bool operator!=(const Person&); //TODO implement
	bool operator<=(const Person&);	//TODO implement
	bool operator>=(const Person&);	//TODO implement
	bool operator<(const Person&);	//TODO implement
	bool operator>(const Person&);	//TODO implement
};

#endif /* PERSON_H_ */
