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

		std::string get_vorname() const;
		std::string get_nachname() const;
		int get_alter() const;
		int get_groesse() const;
public:
		Person();
		~Person();
		void set_vorname(std::string name);
		void set_nachname(std::string name);
		void set_alter (int alter);
		void set_groesse(int groesse_in_cm);
		void set_groesse(float groesse_in_m);
		void info() const;
		static int anzahl;


};

#endif /* PERSON_H_ */
