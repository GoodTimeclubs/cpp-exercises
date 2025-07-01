//
// Created by bengutzeit on 14.05.25.
//

#ifndef NODE_H
#define NODE_H



class Node {
private:
    Node* next;
public:
    int data;
    bool is_start;
    Node();

    void set_next(Node*);
    Node* get_next();
};



#endif //NODE_H
