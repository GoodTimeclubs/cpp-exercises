//
// Created by bengutzeit on 19.05.25.
//

#include <iostream>
#include <ostream>

class Person { //Abstrakte Klasse kann keine instanuen haben
public:
    virtual void bezahlen() = 0; //Abstrakte Klasse wird nur von den childs verwendet, aktiviert aber virtual

    virtual ~Person() = default;
};

class Student : public Person {
public:
    void bezahlen() {
        std::cout << "Das macht nur 7€ bitte!" << std::endl;
    };
};

class Dozent : public Person {
public:
    void bezahlen() {
        std::cout << "Das macht 10€ bitte!" << std::endl;
    };
};

int main() {
    Student* person1 = new Student();
    Dozent* person2 = new Dozent();

    person1->bezahlen();
    person2->bezahlen();

    delete(person1);
    delete(person2);

    return 0;
}