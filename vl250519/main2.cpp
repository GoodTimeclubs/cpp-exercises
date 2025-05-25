//
// Created by bengutzeit on 19.05.25.
//


#include <cstring>
#include <iostream>

class Person {
private:
    char* vorname = nullptr;
    char* nachname = nullptr;

public:
    Person() = default;
    Person(char* vorname, char* nachname) {
        set_vorname(vorname);
        set_nachname(nachname);
    }

    void set_vorname(char* neu) {
        delete(vorname);
        vorname = nullptr;
        if (neu != nullptr) {
            vorname = strdup(neu);
        }
    }
    void set_nachname(char* neu) {
        delete(nachname);
        nachname = nullptr;
        if (neu != nullptr) {
            nachname = strdup(neu);
        }
    }
    virtual void info()const { //Entscheidung zur Laufzeit welche info Methode verwendet wird
        std::cout << "Vorname: " << vorname << std::endl << "Nachname: " << nachname << std::endl;
    };
};

class Student : public Person {
private:
    int matrikelnummer = 0;
public:
    Student(char* vorname, char* nachname, int matrikelnummer) : Person(vorname, nachname) {
        set_matrikelnummer(matrikelnummer);
    }
    void set_matrikelnummer(int neu) {
        matrikelnummer = neu;
    }
    void info()const override{ //override für virtual Erinnerung
        Person::info();
        std::cout << "Matrikelnummer: " << matrikelnummer << std::endl;
    }
};

int main() {
    // Person* p;
    // p = new Person((char*)"Max", (char*)"Mustermann");
    // p->info();
    //
    // Student strudent((char*)"Martina", (char*)"Muster", 3 );
    // strudent.info();

    Person* stud2 = new Student ((char*)"Martina", (char*)"Muster", 3 );
    Person* stud1 = new Person ((char*)"Ben", (char*)"Gutzeit");

    stud2->info();
    stud1->info();

    //delete(p);
    delete(stud2);
    delete(stud1);
    return 0;
}