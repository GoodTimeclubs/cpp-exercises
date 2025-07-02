/*
 * Vip.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef VIP_H_
#define VIP_H_
#include <iostream>
#include "Person.h"

class Vip : public Person {
public:
	Vip();
	Vip(char*);
	virtual ~Vip();
	void print()override;

	friend std::ostream& operator<< (std::ostream&, const Vip&);
};

#endif /* VIP_H_ */
