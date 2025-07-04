/*
 * List.h
 *
 *  Created on: 24.05.2025
 *      Author: bengutzeit
 */

#ifndef LIST_H_
#define LIST_H_

#include "Node.h"


template <typename T> class List {
private:
	Node<T>* first;
	void set_first(Node<T>* frist);
	Node<T>* find_k(const int pos);
	int& find_d(const int pos);
	void add(const T data);

public:
	List();
	List(List&);
	~List();
	List<T>& operator=(List&);
	List<T>& operator+(List&);
	List<T>& operator+(T);
	T& operator[](int);

    int count();
    void insert(const T data, const int pos);
    Node<T>* link(struct List<T>* other);
    void print();
    void ll_delete(const int pos);
    void ll_delete();
    void sort();
};

#endif /* LIST_H_ */
