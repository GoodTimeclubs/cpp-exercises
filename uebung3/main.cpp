#include <iostream>

class Foobar {
public:
    int foo;
    int bar;

    void eigenschaften_ausgeben() {
        std::cout << "foo = " << foo << " und bar= " << bar << std::endl;
     }

    void foo_eingeben() {
        std::cout << "Geben Sie bitte den Wert fuer foo ein: ";
        std::cin >> foo;
    }

    void bar_eingeben() {
        std::cout << "Geben Sie bitte den Wert fuer bar ein: ";
        std::cin >> bar;
    }

    void eigenschaften_einlesen() {
        std::cout << "Es werden nun die Werte fuer foo und bar eingelesen: " << std::endl;
        foo_eingeben();
        bar_eingeben();
    }
};

int main() {
    Foobar instanz1;
    Foobar instanz2;

    instanz1.eigenschaften_einlesen();
    instanz2.eigenschaften_einlesen();
    instanz1.eigenschaften_ausgeben();
    instanz2.eigenschaften_ausgeben();
}