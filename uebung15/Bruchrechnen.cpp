/*
 * Bruchrechnen.cpp
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */

#include "Bruch.h"

int main() {
    Bruch B1(2,5);
    Bruch B2(1,3);
    Bruch B3;

    B3 = B1.addieren(50);
    B3.ausgabe();

    B3 = B1.subtrahieren(50);
    B3.ausgabe();

    B3 = B1.multiplizieren(50);
    B3.ausgabe();

    B3 = B1.dividieren(50);
    B3.ausgabe();
}
