/*
 * Garage.h
 *
 *  Created on: 12.07.2025
 *      Author: bengutzeit
 */

#ifndef GARAGE_H_
#define GARAGE_H_
#include <vector>
#include "Fahrzeug.h"
#include "Fahrrad.h"
#include "Auto.h"

class Garage {
private:
	std::vector<Fahrzeug*> storage;
public:
	Garage() = default;
	virtual ~Garage();
	Garage(const Garage &other);
	Garage& operator=(const Garage &other);
	void add(Fahrzeug* );
	friend std::ostream& operator<<(std::ostream& , const Garage&);
	const std::vector<Fahrzeug*>& getStorage() const;
	void setStorage(const std::vector<Fahrzeug*> &storage);
};

#endif /* GARAGE_H_ */
