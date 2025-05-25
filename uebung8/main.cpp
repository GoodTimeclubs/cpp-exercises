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
    head -> next = node1;
    head ->data = 0;
    node1 -> next = node2;
    node1 -> data = 1;
    node2 -> next = node3;
    node2 -> data = 2;
    node3 -> next = node4;
    node3 -> data = 3;
    node4 -> next = node5;
    node4 -> data = 4;
    node5 -> next = nullptr;
    node5 -> data = 5;

    //2. Liste
    head2 -> next = node21;
    head2 ->data = 20;
    node21 -> next = node22;
    node21 -> data = 21;
    node22 -> next = node23;
    node22 -> data = 22;
    node23 -> next = node24;
    node23 -> data = 23;
    node24 -> next = node25;
    node24 -> data = 24;
    node25 -> next = nullptr;
    node25 -> data = 25;

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