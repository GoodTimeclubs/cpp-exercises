/*
 * Auto.h
 *
 *  Created on: 11.07.2025
 *      Author: bengutzeit
 */

#ifndef AUTO_H_
#define AUTO_H_

#include "Fahrzeug.h"

class Auto: public Fahrzeug {
private:
	int anzahlTueren;
public:
	Auto() = default;
	Auto(const std::string& hersteller, const std::string& modell, const int& baujahr,const int& anzahlTueren);
	virtual ~Auto() = default;
	Auto(const Auto &other);
	Auto& operator=(const Auto &other);
	void print(std::ostream&)override;
};

#endif /* AUTO_H_ */
