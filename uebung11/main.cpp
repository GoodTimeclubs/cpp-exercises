#include <iostream>
#include "Node.h"
int main() {
    int pos = 0;
    int size = 0;
    auto* head = new Node;
    auto* node1 = new Node;
    auto* node2 = new Node;
    auto* node3 = new Node;
    auto* node4 = new Node;
    auto* node5 = new Node;

    auto* head2 = new Node;
    auto* node21 = new Node;
    auto* node22 = new Node;
    auto* node23 = new Node;
    auto* node24 = new Node;
    auto* node25 = new Node;

    //1. Liste
    head->set(node1,0);
    node1->set(node2,1);
    node2->set(node3,2);
    node3->set(node4,3);
    node4->set(node5,4);
    node5->set(nullptr,5);

    //2. Liste
    head2 -> set(node21,20);
    node21 -> set(node22,21);
    node22 -> set(node23,22);
    node23 -> set(node24, 23);
    node24 -> set(node25,24);
    node25 -> set(nullptr,25);

    //Groeße Zaehlen
    size = head->ll_count();
    std::cout << "Die Liste enthaelt " << size << " Knoten." << std::endl;
    do{
        std::cout << "Bitte gib die Position des gesuchten Knotens an: ";
        std::cin >> pos;
    }while (pos > size);

    //Knoten suchen
    std::cout << "Der Inhalt des Knotens ist: " <<  head->ll_find_d(pos) << std::endl;

    //knoten hinzufuegen
    pos = 3;
    head->ll_add(70);
    //std::cout << "Der Inhalt des Knotens ist: " <<  ll_find_d(head, pos) << std::endl;

    //Liste hinzufuegen
    Node* joined = head->ll_add(head2);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    joined->ll_print();

    //Knoten loeschen
    std::cout << "Welchen Knoten moechtest du loeschen? (eingabe wird nicht ueberprueft)" << std::endl;
    std::cin >> pos;

    joined->ll_delete(pos);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    joined->ll_print();





//Todo: fix sorting!

    //Liste sortieren
    //Node* sorted = joined->ll_sort();

    //Liste ausgeben
    //std::cout << "Die Liste enthaelt: ";
    //sorted->ll_print();

    //Liste loeschen
    joined->ll_delete();
    //sorted->ll_delete();

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    joined->ll_print();
    return 0;
}