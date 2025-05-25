/*
 * Bruch.cpp
 *
 *  Created on: 22.05.2025
 *      Author: bengutzeit
 */


#include <iostream>

class Bruch {
public:
    int zaehler;
    int nenner;

    Bruch(){
    	std::cout << "Bruch wird initialisiert ..." << std::endl;
    	zaehler = 0;
    	nenner = 1;
    }

    void ausgabe() {
        std::cout << zaehler << " / " << nenner << std::endl;
    }

    Bruch kuerzen() {
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
    Bruch multiplizieren(Bruch B2) {
        auto temp = new Bruch;
        temp->zaehler = zaehler * B2.zaehler;
        temp->nenner = nenner * B2.nenner;
        return *temp;
    }

    Bruch dividieren(Bruch B2) {
        auto temp = new Bruch;
        temp->zaehler = zaehler * B2.nenner;
        temp->nenner = nenner * B2.zaehler;
        return *temp;
    }
    Bruch addieren(Bruch B2) {
        auto temp = new Bruch;
        temp->zaehler = (zaehler * B2.nenner) + (B2.zaehler*nenner);
        temp->nenner = nenner * B2.nenner;;

        *temp = temp->kuerzen();
        return *temp;
    }

    Bruch subtrahieren(Bruch B2) {
        auto temp = new Bruch;
        temp->zaehler = (zaehler * B2.nenner) - (B2.zaehler*nenner);
        temp->nenner = nenner * B2.nenner;;
        *temp = temp->kuerzen();
        return *temp;
    }
};


//multiplizieren
//Dividieren
//Addieren
//subtrahieren
//Kürzen

int main() {
    Bruch B1;
    Bruch B2;
    Bruch B3;

    B1.zaehler = 2;
    B1.nenner = 5;

    B2.zaehler = 1;
    B2.nenner = 3;

    B3 = B1.addieren(B2);
    B3.ausgabe();

    B3 = B1.subtrahieren(B2);
    B3.ausgabe();

    B3 = B1.multiplizieren(B2);
    B3.ausgabe();

    B3 = B1.dividieren(B2);
    B3.ausgabe();
}
