#include <iostream>

class Elternklasse {
public:
    friend std::ostream& operator<<(std::ostream&, const Elternklasse&);
    virtual ~Elternklasse() = default;

virtual void print(std::ostream& out) const{
	out << "Elternklasse";
}

};

class Kindklasse :public Elternklasse {
public:
    friend std::ostream& operator<<(std::ostream&, const Kindklasse&);

    void print(std::ostream& out) const override{
    	out << "Kindklasse";
    }

};



std::ostream& operator<<(std::ostream& out, const Elternklasse& instanz) {
    instanz.print(out);
    return out;
}

std::ostream& operator<<(std::ostream& out, const Kindklasse& instanz) {
	instanz.print(out);
    return out;
}


int main()
{
    Elternklasse elter;
    std::cout << elter << std::endl;
    Kindklasse kind;
    std::cout << kind << std::endl;
    Elternklasse* pointer = new Kindklasse();
    std::cout << *pointer << std::endl;
}
