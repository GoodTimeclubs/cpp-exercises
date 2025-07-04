//
// Created by bengutzeit on 14.05.25.
//

#ifndef NODE_H
#define NODE_H



template <typename T> class Node {
private:
    Node* next;
public:
    T data;
    bool is_start;
    Node<T>();

    void set_next(Node<T>*);
    Node<T>* get_next();
};



#endif //NODE_H
