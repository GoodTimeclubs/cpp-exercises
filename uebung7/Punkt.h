//
// Created by bengutzeit on 14.05.25.
//

#ifndef PUNKT_H
#define PUNKT_H

class Punkt {
public:
    int x;
    int y;

    void einlesen();
    double abstand(Punkt ko2);
    Punkt add(const Punkt ko2);
    void ausgabe();
};



#endif //PUNKT_H
