/*
 * Fahrzeug.h
 *
 *  Created on: 09.07.2025
 *      Author: bengutzeit
 */

#ifndef FAHRZEUG_H_
#define FAHRZEUG_H_
#include <iostream>


class Fahrzeug {
protected:
	std::string hersteller;
	std::string modell;
	int baujahr;
public:
	Fahrzeug();
	Fahrzeug(std::string hersteller, std::string modell, int baujahr);
	virtual ~Fahrzeug() = default;
	Fahrzeug& operator=(const Fahrzeug &other);
	Fahrzeug(const Fahrzeug &other);
	virtual void print(std::ostream&);

};

#endif /* FAHRZEUG_H_ */
