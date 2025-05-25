/*
 * Person.h
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <iomanip>

class Person {
private:
		std::string vorname;
		std::string nachname;
		int alter;
		int groesse_in_cm;

		std::string get_vorname();
		std::string get_nachname();
		int get_alter();
		int get_groesse();
public:
		Person();
		void set_vorname(std::string name);
		void set_nachname(std::string name);
		void set_alter (int alter);
		void set_groesse(int groesse_in_cm);
		void set_groesse(float groesse_in_m);
		void info();


};

#endif /* PERSON_H_ */
