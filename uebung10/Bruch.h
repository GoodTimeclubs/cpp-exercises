//
// Created by bengutzeit on 14.05.25.
//

#ifndef BRUCH_H
#define BRUCH_H



class Bruch {
    int zaehler;
    int nenner;
public:
    void set(int zaehler, int nenner);
    void ausgabe();
    Bruch kuerzen();
    Bruch multiplizieren(Bruch B2);
    Bruch dividieren(Bruch B2);
    Bruch addieren(Bruch B2);
    Bruch subtrahieren(Bruch B2);
};



#endif //BRUCH_H
