#include <iostream>
#include "List.h"
int main() {
	int pos;
    List l1;
    List l2;
    List l3;

    l1<<30<<40;

    std::cout << l1


    l1.print();
    l2.print();

//	std::cout << "Bitte gib die Position des gesuchten Knotens an: ";
//	std::cin >> pos;
//
//    //Knoten suchen
//    std::cout << "Der Inhalt des Knotens ist: " <<  l1[pos]<< std::endl;
////
//    //knoten hinzufuegen
//    pos = 3;
//    l1+(70);
//    //std::cout << "Der Inhalt des Knotens ist: " <<  ll_find_d(head, pos) << std::endl;

    //Liste hinzufuegen
    l3 = l1+l2;


//    //Liste ausgeben
//    std::cout << "Die Liste enthaelt: ";
//    l1.ll_print();
//
//    //Knoten loeschen
//    std::cout << "Welchen Knoten moechtest du loeschen? (eingabe wird nicht ueberprueft)" << std::endl;
//    std::cin >> pos;
//
//    l1.ll_delete(pos);
//
//    //Liste ausgeben
//    std::cout << "Die Liste enthaelt: ";
//    l1.ll_print();


    //Liste sortieren
    l1.sort();

    std::cout << std::endl;
    l2.print();
    std::cout << std::endl;

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    l1.print();

    std::cout << std::endl;
	l3.print();
	std::cout << std::endl;

    return 0;
}
