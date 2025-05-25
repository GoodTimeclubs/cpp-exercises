/*
 * Bruch.h
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */

#ifndef BRUCH_H_
#define BRUCH_H_


#include <iostream>

class Bruch {
public:
    int zaehler;
    int nenner;

    Bruch();
    Bruch(int zaehler, int nenner);
    Bruch(int zahl);
    void ausgabe();
    void kuerzen();

    Bruch multiplizieren(Bruch B2);
    Bruch multiplizieren(int);
    Bruch dividieren(Bruch B2);
    Bruch dividieren(int);
    Bruch addieren(Bruch B2);
    Bruch addieren(int);
    Bruch subtrahieren(Bruch B2);
    Bruch subtrahieren(int);

};


#endif /* BRUCH_H_ */
