/*
 * Student.h
 *
 *  Created on: Jul 1, 2025
 *      Author: bengutzeit
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

class Student : public Person{
private:
	char* matrikelnummer;
public:
	Student();
	virtual ~Student();
	Student(const char*);
	Student(const Student&);
	Student(const char*, const char*,const int&,const char*);
	const Student& operator=(const Student& other);

	void set_matrikelnummer(const char*);
	void ausgabe() override;


};

#endif /* STUDENT_H_ */
