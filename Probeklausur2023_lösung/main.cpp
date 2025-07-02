#include <iostream>
#include <vector>
#include <string.h>

class Person {
protected:
    char* name;
    void set_name(char* name) {
        if (name != nullptr) {
            delete(this->name);
            this->name = strdup(name);
        }
    }
    virtual void print(std::ostream& out) const {
        if (name != nullptr) out << name;
        else out << "<unbekannt>";
    }
public:
    Person(char* name) : name(nullptr) {
        set_name(name);
    }
    Person(const Person&) = delete;
    Person& operator=(const Person&) = delete;
    virtual ~Person() {
        delete(name);
    }
    friend std::ostream& operator<<(std::ostream& out, const Person& person) {
        person.print(out);
        return out;
    }
};


class Gast : public Person {
private:
    int eintrittspreis;
protected:
    virtual void print(std::ostream& out) const override {
        if (name != nullptr) out << name << " (" << eintrittspreis << " Euro)";
        else out << "<unbekannt> (" << eintrittspreis << " Euro)";
    }
public:
    Gast(char* name, int preis) : Person(name), eintrittspreis(preis) {
        std::cout << *this << " hat den Laden für " << eintrittspreis << " Euro betreten.\n";
    };
    ~Gast() {
        std::cout << *this << " hat den Laden wieder verlassen.\n";
    }
};



class VIP : public Person {
protected:
    virtual void print(std::ostream& out) const override {
        if (name != nullptr) out << name << " (VIP)";
        else out << "<unbekannt> (VIP)";
    }
public:
    VIP(char* name) : Person(name) {};
};




class Party {
private:
    std::vector<Person*> Gast;
public:
    void hereinlassen(Person* person) {
        Gast.push_back(person);
    }
    friend std::ostream& operator<<(std::ostream& out, const Party& vorlesung) {
        out << "Auf der Party sind folgende " << vorlesung.Gast.size() << " Personen:\n";
        for(const Person* person : vorlesung.Gast) {
            out << *person << std::endl;
        }
        return out;
    }
};



int main(int argc, const char * argv[]) {
    Person* paula = new Gast((char*)"Paula Partygirl",1);
    Person* simon = new Gast((char*)"Simon Supersimp",100);
    Person* ina = new VIP((char*)"Ina Influencer");
    Party party;
    party.hereinlassen(paula);
    party.hereinlassen(simon);
    party.hereinlassen(ina);
    std::cout << party;
    delete(paula);
    delete(simon);
    delete(ina);
    return 0;
}
