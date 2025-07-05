/*
 * Person.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

class Person {
private:
	char* name;
public:
	Person();
	Person(char*);
	Person(const Person&) = delete; //Kopieren verbieten
	virtual ~Person();
	char* get_name()const;
	virtual void print(std::ostream&)const;

	friend std::ostream& operator<< (std::ostream&, const Person&);
};

#endif /* PERSON_H_ */
