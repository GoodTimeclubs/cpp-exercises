#include <iostream>

#include "Bruch.h"

int main() {
    Bruch B1;
    Bruch B2;
    Bruch B3;

    B1.set(2,5);
    B2.set(1,3);
    B3 = B1.addieren(B2);
    B3.ausgabe();

    B3 = B1.subtrahieren(B2);
    B3.ausgabe();

    B3 = B1.multiplizieren(B2);
    B3.ausgabe();

    B3 = B1.dividieren(B2);
    B3.ausgabe();
    return 0;
}
