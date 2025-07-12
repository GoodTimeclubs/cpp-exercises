/*
 * Fahrrad.h
 *
 *  Created on: 11.07.2025
 *      Author: bengutzeit
 */

#ifndef FAHRRAD_H_
#define FAHRRAD_H_

#include "Fahrzeug.h"

class Fahrrad: public Fahrzeug {
protected:
	bool hat_gepaecktraeger;
public:
	Fahrrad() = default;
	Fahrrad(const std::string& hersteller, const std::string& modell, const int& baujahr, const bool& hat_fahrradtraeger);
	virtual ~Fahrrad() = default;
	Fahrrad(const Fahrrad &other);
	Fahrrad& operator=(const Fahrrad &other);
	void print(std::ostream&)override;
};

#endif /* FAHRRAD_H_ */
