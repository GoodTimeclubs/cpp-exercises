//
// Created by bengutzeit on 14.05.25.
//

#ifndef NODE_H
#define NODE_H



class Node {
public:
    Node* next;
    int data;
    int ll_count();
    struct Node* ll_find_k(const int pos);
    int ll_find_d(const int pos);
    void ll_add(const int data);
    void ll_add(const int data, const int pos);
    struct Node* ll_add(struct Node* head2);
    void ll_print();
    void ll_delete(const int pos);
    void ll_delete();
    struct Node*  ll_sort();
};



#endif //NODE_H
