//
// Created by bengutzeit on 14.05.25.
//

#include "Punkt.h"
#include <iostream>
#include <cmath>

void Punkt::einlesen() {
    std::cout << "Bitte geben Sie den Wert für x ein: ";
    std::cin >> x;
    std::cout << "Bitte geben Sie den Wert für y ein: ";
    std::cin >> y;
}

double Punkt::abstand(Punkt ko2) {
    double temp = 0;
    double abstand_x = x - ko2.x;
    double abstand_y = y - ko2.y;

    temp = abstand_x * abstand_x + abstand_y * abstand_y;
    temp = std::sqrt(temp);
    return temp;
}

Punkt Punkt::add(const Punkt ko2){
    const auto Temp = new Punkt;

    Temp->x = x + ko2.x;
    Temp->y = y + ko2.y;
    return *Temp;
}

void Punkt::ausgabe() {
    std::cout << "x: " << x;
    std::cout << " und y: " << y;
}
