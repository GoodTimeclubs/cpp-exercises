/*
 * Party.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef PARTY_H_
#define PARTY_H_
#include <vector>
#include "Person.h"
#include "Gast.h"
#include "Vip.h"

class Party {
private:
	std::vector<Person*> gästeliste;

public:
	Party();
	virtual ~Party();
	void hereinlassen();
	void hereinlassen(Person* p);
	friend std::ostream& operator<< (std::ostream& out, Party& p);
	int get_size();

};
#endif /* PARTY_H_ */
