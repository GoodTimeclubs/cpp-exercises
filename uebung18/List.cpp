//
// Created by bengutzeit on 14.05.25.
//

#include "List.h"
#include <iostream>

List::List():first(new Node){
	first->is_start = true;
};

List::List(List& other){
	operator=(other);
}

List::~List(){
	if(first->get_next() != nullptr)ll_delete();
}

List& List::operator=(List& other){
	this->ll_delete();
	this->first = new Node;
	first->is_start = true;
	Node* temp = new Node;

	temp = other.first;

	while(temp != nullptr){
		this->add(temp->data);
		temp = temp->get_next();
	}

	delete temp;
	return *this;
}

List& List::operator+(int data){
	add(data);
	return *this;
}

List& List::operator+(List& other){
	Node* temp = new Node;
	temp = other.first;

	while(temp != nullptr){
		this->add(temp->data);
		temp = temp->get_next();
	}

	delete temp;
	return *this;
}

int& List::operator[](int pos){
	return find_d(pos);
}

void List::set_first(Node* first) {
    this->first = first;
}

int List::count(){ //Anzahl Elemente zaehlen
    int count = 0;
    Node* head = first;
    while (head != nullptr) {
        head = head->get_next();
        count++;
    }
    return count;
}

struct Node* List::find_k(const int pos) { //Knoten an Position x finden
    int i = 0;
    Node* head = first;
    while(head != nullptr && i < pos){
        head = head->get_next();
        i++;
    }
    return head;
}

int& List::find_d(const int pos) { //Inhalt an Position x finden
    return find_k(pos)->data;
}

void List::add(const int data) { //Neues Element ans Ende anhaengen
	if (first->is_start){
		first->data = data;
		first->is_start = false;
	}
	else{
		Node* head = first;
		while (head->get_next() != nullptr) {
			head = head->get_next();
		}

		Node* temp = new Node;
		temp->data = data;
		temp->set_next(nullptr);
		head->set_next(temp);
	}
}

void List::insert(const int data, const int pos){ //Einfuegen eines Elements an Position x
    Node* head = first;
    int count = 0;
    while (head->get_next() != nullptr && count < pos-1) {
        head = head->get_next();
        count++;
    }
    Node* temp = new Node;
    temp->data = data;
    temp->set_next(head->get_next());
    head->set_next(temp);
}

struct Node* List::link(struct List* l2) { //Neue Liste ans Ende anhaengen
    Node* head1 = first;
    Node* temp = head1;
    while (temp->get_next() != nullptr) {
        temp = temp->get_next();
    }
    temp->set_next(l2->first);
    return head1;
}

void List::print() { // Ausgeben der ganzen Liste (mit Komma getrennt, am Ende Punkt)
    bool exit = false;
    Node* head = first;
    if (head) {
        while (head != nullptr && !exit) {
            if (head->get_next() != nullptr) {
                std::cout << head->data << ", ";
                head = head->get_next();
            }
            else{
                std::cout << head->data << "." << std::endl;
                exit = true;
            }

        }
    }
}

void List::ll_delete(const int pos) { //Element an Position x loeschen
    Node* before = find_k(pos-1);
    Node* temp = before->get_next();
    char choice = 0;

    std::cout << "Der inhalt am " << pos << ". Knoten ist : " << temp->data << std::endl;
    std::cout << "Willst du diesen wirklich loeschen? (y|n)" << std::endl;
    std::cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        before->set_next(temp->get_next());
        delete temp;
    }
    else {
        std::cout << "Loeschvorgang abgebrochen, es wurden keine aenderungen vorgenommen!" << std::endl;
    }
}

void List::ll_delete() {

	Node* current = first;
	Node* next = nullptr;

	while (current != nullptr) {
		next = current->get_next();
		delete current;
//		first = next;
		current = next;
	}

	first = nullptr; // Liste ist jetzt leer
//	std::cout << "Liste wurde erfolgreich geloescht!" << std::endl;
}

void List::sort() {// Sortieren der Liste nach ihren Inhalten aufsteigend // fix sorting!
	int key;
	int i;
	for(int j = 1; j < count(); j++){
		key = find_d(j);
		i = j-1;
//		ll_print();
		while(i>=0 && find_d(i) > key){
			operator[](i+1) = find_d(i);
			i = i-1;
		}
		operator[](i+1) = key;
	}

}
