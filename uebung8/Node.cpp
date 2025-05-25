//
// Created by bengutzeit on 14.05.25.
//

#include "Node.h"
#include <iostream>

Node* next;
int data;

int Node::ll_count(){ //Anzahl Elemente zaehlen
    int count = 0;
    Node* head = this;
    while (head != nullptr) {
        head = head->next;
        count++;
    }
    return count;
}

struct Node* Node::ll_find_k(const int pos) { //Knoten an Position x finden
    int i = 0;
    Node* head = this;
    while(i != pos){
        head = head ->next;
        i++;
    }
    return head;
}

int Node::ll_find_d(const int pos) { //Inhalt an Position x finden
    return ll_find_k(pos)->data;
}

void Node::ll_add(const int data) { //Neues Element ans Ende anhaengen
    Node* head = this;
    while (head->next != nullptr) {
        head = head->next;
    }
    auto *temp = new struct Node;
    temp->data = data;
    temp->next = nullptr;
    head->next = temp;
}

void Node::ll_add(const int data, const int pos){ //Einfuegen eines Elements an Position x
    Node* head = this;
    int count = 0;
    while (head->next != nullptr && count < pos-1) {
        head = head->next;
        count++;
    }
    auto *temp = new struct Node;
    temp->data = data;
    temp->next = head->next;
    head->next = temp;
}

struct Node* Node::ll_add(struct Node* head2) { //Neue Liste ans Ende anhaengen
    Node* head1 = this;
    struct Node* temp = head1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
}

void Node::ll_print() { // Ausgeben der ganzen Liste (mit Komma getrennt, am Ende Punkt)
    bool exit = false;
    Node* head = this;
    if (head) {
        while (head != nullptr && !exit) {
            if (head->next != nullptr) {
                std::cout << head->data << ", ";
                head = head->next;
            }
            else{
                std::cout << head->data << "." << std::endl;
                exit = true;
            }

        }
    }
}

void Node::ll_delete(const int pos) { //Element an Position x loeschen
    Node* head = this;
    struct Node* before = ll_find_k(pos-1);
    struct Node* temp = before->next;
    char choice = 0;

    std::cout << "Der inhalt am " << pos << ". Knoten ist : " << temp->data << std::endl;
    std::cout << "Willst du diesen wirklich loeschen? (y|n)" << std::endl;
    std::cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        before->next = temp->next;
        delete temp;
    }
    else {
        std::cout << "Loeschvorgang abgebrochen, es wurden keine aenderungen vorgenommen!" << std::endl;
    }
}

void Node::ll_delete() { //Loeschen der ganzen Liste
    char choice;
    Node* head = this;
    struct Node* temp = head->next;
    std::cout << "Willst du wirklich die ganze Liste mit " << head->ll_count() << " Knoten loeschen? (y|n)" << std::endl;
    std::cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        while (head->next != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
        head = nullptr;
    }
    else {
        std::cout << "Loeschvorgang abgebrochen, es wurden keine aenderungen vorgenommen!" << std::endl;
    }
}

struct Node*  Node::ll_sort() {//TODO: Sortieren der Liste nach ihren Inhalten aufsteigend //Todo: fix sorting!
    Node* head = this;
    auto* copy = new struct Node;
    auto* copy2 = new struct Node;
    auto* copysorted = new struct Node;
    int i2 = 0;
    int min = 0;
    int lastmax = 0;

    for (int i3 = 0; i3 < copy->ll_count(); i3++) {
        copy2 = copy;
        copy->ll_delete('y');
        copy = new struct Node;
        for (int i = 0; i < copy2->ll_count(); i++) {
            int local =  copy2->ll_find_d(i);
            if (local<min) min = local;
            else copy->ll_add(local);

        }
        copysorted->ll_add(min);
    }
    return copysorted;
}
