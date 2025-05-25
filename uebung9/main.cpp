#include <iostream>
#include "Punkt.h"

int main() {
    Punkt koordinate1;
    Punkt koordinate2;

    koordinate1.einlesen();
    koordinate2.einlesen();

    std::cout << "Der Abstand von ";
    koordinate1.ausgabe();
    std::cout << " und ";
    koordinate2.ausgabe();
    std::cout << " ist " << koordinate1.abstand(koordinate2) << std::endl;

    Punkt koordinate3 = koordinate1.add(koordinate2);
    std::cout << "Addiert sind diese Koordinaten: ";
    koordinate3.ausgabe();
    std::cout << std::endl;
    return 0;
}