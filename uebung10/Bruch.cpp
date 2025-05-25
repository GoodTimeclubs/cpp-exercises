//
// Created by bengutzeit on 14.05.25.
//

#include "Bruch.h"
#include <iostream>

void Bruch::set(const int zaehler,const int nenner) {
    if (zaehler > nenner) {
        std::cout << "Der Zähler ist größer als der Nenner!" << std::endl;
    }
    this->zaehler = zaehler;
    this->nenner = nenner;
}

void Bruch::ausgabe() {
    std::cout << zaehler << " / " << nenner << std::endl;
}

Bruch Bruch::kuerzen() {
    auto temp = new Bruch;
    int m = 0;
    int n = 0;
    int r = 0;

    m = zaehler;
    n = nenner;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    //std::cout << "ggt: " << m << std::endl;
    temp->zaehler = zaehler / m;
    temp->nenner = nenner / m;
    return *temp;
}
Bruch Bruch::multiplizieren(Bruch B2) {
    auto temp = new Bruch;
    temp->zaehler = zaehler * B2.zaehler;
    temp->nenner = nenner * B2.nenner;
    return *temp;
}

Bruch Bruch::dividieren(Bruch B2) {
    auto temp = new Bruch;
    temp->zaehler = zaehler * B2.nenner;
    temp->nenner = nenner * B2.zaehler;
    return *temp;
}
Bruch Bruch::addieren(Bruch B2) {
    auto temp = new Bruch;
    temp->zaehler = (zaehler * B2.nenner) + (B2.zaehler*nenner);
    temp->nenner = nenner * B2.nenner;;

    *temp = temp->kuerzen();
    return *temp;
}

Bruch Bruch::subtrahieren(Bruch B2) {
    auto temp = new Bruch;
    temp->zaehler = (zaehler * B2.nenner) - (B2.zaehler*nenner);
    temp->nenner = nenner * B2.nenner;;
    *temp = temp->kuerzen();
    return *temp;
}