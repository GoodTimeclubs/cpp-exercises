//
// Created by bengutzeit on 14.05.25.
//

#include "List.h"
#include <iostream>

template <typename T>List<T>::List():first(new Node<T>){
	first->is_start = true;
};

template <typename T>List<T>::List(List& other){
	operator=(other);
}

template <typename T>List<T>::~List(){
	if(first->get_next() != nullptr)ll_delete();
}

template <typename T> List<T>& List<T>::operator=(List& other){
	this->ll_delete();
	this->first = new Node<T>;
	first->is_start = true;
	Node<T>* temp = new Node<T>;

	temp = other.first;

	while(temp != nullptr){
		this->add(temp->data);
		temp = temp->get_next();
	}

	delete temp;
	return *this;
}

template <typename T> List<T>& List<T>::operator+(T data){
	add(data);
	return *this;
}

template <typename T> List<T>& List<T>::operator+(List& other){
	Node<T>* temp = new Node<T>;
	temp = other.first;

	while(temp != nullptr){
		this->add(temp->data);
		temp = temp->get_next();
	}

	delete temp;
	return *this;
}

template <typename T> T& List<T>::operator[](int pos){
	return find_d(pos);
}

template <typename T> void List<T>::set_first(Node<T>* first) {
    this->first = first;
}

template <typename T> int List<T>::count(){ //Anzahl Elemente zaehlen
    int count = 0;
    Node<T>* head = first;
    while (head != nullptr) {
        head = head->get_next();
        count++;
    }
    return count;
}

template <typename T> struct Node<T>* List<T>::find_k(const int pos) { //Knoten an Position x finden
    int i = 0;
    Node<T>* head = first;
    while(head != nullptr && i < pos){
        head = head->get_next();
        i++;
    }
    return head;
}

template <typename T> int& List<T>::find_d(const int pos) { //Inhalt an Position x finden
    return find_k(pos)->data;
}

template <typename T> void List<T>::add(const T data) { //Neues Element ans Ende anhaengen
	if (first->is_start){
		first->data = data;
		first->is_start = false;
	}
	else{
		Node<T>* head = first;
		while (head->get_next() != nullptr) {
			head = head->get_next();
		}

		Node<T>* temp = new Node<T>;
		temp->data = data;
		temp->set_next(nullptr);
		head->set_next(temp);
	}
}

template <typename T> void List<T>::insert(const T data, const int pos){ //Einfuegen eines Elements an Position x
    Node<T>* head = first;
    int count = 0;
    while (head->get_next() != nullptr && count < pos-1) {
        head = head->get_next();
        count++;
    }
    Node<T>* temp = new Node<T>;
    temp->data = data;
    temp->set_next(head->get_next());
    head->set_next(temp);
}

template <typename T> struct Node<T>* List<T>::link(struct List<T>* l2) { //Neue Liste ans Ende anhaengen
    Node<T>* head1 = first;
    Node<T>* temp = head1;
    while (temp->get_next() != nullptr) {
        temp = temp->get_next();
    }
    temp->set_next(l2->first);
    return head1;
}

template <typename T> void List<T>::print() { // Ausgeben der ganzen Liste (mit Komma getrennt, am Ende Punkt)
    bool exit = false;
    Node<T>* head = first;
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

template <typename T> void List<T>::ll_delete(const int pos) { //Element an Position x loeschen
    Node<T>* before = find_k(pos-1);
    Node<T>* temp = before->get_next();
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

template <typename T> void List<T>::ll_delete() {

	Node<T>* current = first;
	Node<T>* next = nullptr;

	while (current != nullptr) {
		next = current->get_next();
		delete current;
//		first = next;
		current = next;
	}

	first = nullptr; // Liste ist jetzt leer
}
template <typename T> void List<T>::sort(){
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
