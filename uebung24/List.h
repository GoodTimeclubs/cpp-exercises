/*
 * List.h
 *
 *  Created on: 24.05.2025
 *      Author: bengutzeit
 */

#ifndef LIST_H_
#define LIST_H_

#include "Node.h"
#include <iostream>

class List {
private:
	Node* first;
	void set_first(Node* frist);
	struct Node* find_k(const int pos);
	int& find_d(const int pos);
	void add(const int data);

public:
	List();
	List(List&);
	~List();
	List& operator=(List&);
	List& operator+(List&);
	List& operator+(int);
	int& operator[](int);

    int count();
    void insert(const int data, const int pos);
    struct Node* link(struct List* other);
    void ll_delete(const int pos);
    void ll_delete();
    void sort();
    friend std::ostream& operator<<(std::ostream&, List&);
};

#endif /* LIST_H_ */
