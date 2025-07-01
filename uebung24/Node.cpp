//
// Created by bengutzeit on 14.05.25.
//

#include "Node.h"
#include <iostream>

Node::Node(){
	next = nullptr;
	data = 0;
	is_start = false;
}


void Node::set_next(Node* next){
	this->next = next;
}

Node* Node::get_next(){
	return this->next;
}
