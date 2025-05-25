#include <cmath>
#include <iostream>

class Punkt {
public:
    int x;
    int y;

    void einlesen() {
        std::cout << "Bitte geben Sie den Wert für x ein: ";
        std::cin >> x;
        std::cout << "Bitte geben Sie den Wert für y ein: ";
        std::cin >> y;
    }

    double abstand(Punkt ko2) {
        double temp = 0;
        double abstand_x = x - ko2.x;
        double abstand_y = y - ko2.y;

        temp = abstand_x * abstand_x + abstand_y * abstand_y;
        temp = std::sqrt(temp);
        return temp;
    }

    Punkt add(const Punkt ko2){
        const auto Temp = new Punkt;

        Temp->x = x + ko2.x;
        Temp->y = y + ko2.y;
        return *Temp;
    }

    void ausgabe() {
        std::cout << "x: " << x;
        std::cout << " und y: " << y;
    }
};

//Einlesen der Koordinaten mit x und y

//Abstand berechnen

//addieren

//ausgabe einer Koordinate

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


}