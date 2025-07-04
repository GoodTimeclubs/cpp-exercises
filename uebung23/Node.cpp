//
// Created by bengutzeit on 14.05.25.
//

#include "Node.h"
#include <iostream>

template <typename T> Node<T>::Node(){
	next = nullptr;
	is_start = false;
}


template <typename T> void Node<T>::set_next(Node<T>* next){
	this->next = next;
}

template <typename T> Node<T>* Node<T>::get_next(){
	return this->next;
}
