#include <iostream>

class Node {
public:
    Node* next;
    int data;

    int ll_count(){ //Anzahl Elemente zaehlen
        int count = 0;
        Node* head = this;
        while (head != nullptr) {
            head = head->next;
            count++;
        }
        return count;
    }

    struct Node* ll_find_k(const int pos) { //Knoten an Position x finden
        int i = 0;
        Node* head = this;
        while(i != pos){
            head = head ->next;
            i++;
        }
        return head;
    }

    int ll_find_d(const int pos) { //Inhalt an Position x finden
        return ll_find_k(pos)->data;
    }

    void ll_add(const int data) { //Neues Element ans Ende anhaengen
        Node* head = this;
        while (head->next != nullptr) {
            head = head->next;
        }
        auto *temp = new struct Node;
        temp->data = data;
        temp->next = nullptr;
        head->next = temp;
    }

    void ll_add(const int data, const int pos){ //Einfuegen eines Elements an Position x
        Node* head = this;
        int count = 0;
        while (head->next != nullptr && count < pos-1) {
            head = head->next;
            count++;
        }
        auto *temp = new struct Node;
        temp->data = data;
        temp->next = head->next;
        head->next = temp;
    }

    struct Node* ll_add(struct Node* head2) { //Neue Liste ans Ende anhaengen
        Node* head1 = this;
        struct Node* temp = head1;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = head2;
        return head1;
    }

    void ll_print() { // Ausgeben der ganzen Liste (mit Komma getrennt, am Ende Punkt)
        bool exit = false;
        Node* head = this;
        if (head) {
            while (head != nullptr && !exit) {
                if (head->next != nullptr) {
                    std::cout << head->data << ", ";
                    head = head->next;
                }
                else{
                    std::cout << head->data << "." << std::endl;
                    exit = true;
                }

            }
        }
    }

    void ll_delete(const int pos) { //Element an Position x loeschen
        Node* head = this;
        struct Node* before = ll_find_k(pos-1);
        struct Node* temp = before->next;
        char choice = 0;

        std::cout << "Der inhalt am " << pos << ". Knoten ist : " << temp->data << std::endl;
        std::cout << "Willst du diesen wirklich loeschen? (y|n)" << std::endl;
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            before->next = temp->next;
            delete temp;
        }
        else {
            std::cout << "Loeschvorgang abgebrochen, es wurden keine aenderungen vorgenommen!" << std::endl;
        }
    }

    void ll_delete(char choice = 'n') { //Loeschen der ganzen Liste
        Node* head = this;
        struct Node* temp = head->next;
        std::cout << "Willst du wirklich die ganze Liste mit " << head->ll_count() << " Knoten loeschen? (y|n)" << std::endl;
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            while (head->next != nullptr) {
                temp = head;
                head = head->next;
                delete temp;
            }
            head = nullptr;
        }
        else {
            std::cout << "Loeschvorgang abgebrochen, es wurden keine aenderungen vorgenommen!" << std::endl;
        }
    }

    struct Node*  ll_sort() {//TODO: Sortieren der Liste nach ihren Inhalten aufsteigend //Todo: fix sorting!
        Node* head = this;
        auto* copy = new struct Node;
        auto* copy2 = new struct Node;
        auto* copysorted = new struct Node;
        int i2 = 0;
        int min = 0;
        int lastmax = 0;

        for (int i3 = 0; i3 < copy->ll_count(); i3++) {
            copy2 = copy;
            copy->ll_delete('y');
            copy = new struct Node;
            for (int i = 0; i < copy2->ll_count(); i++) {
                int local =  copy2->ll_find_d(i);
                if (local<min) min = local;
                else copy->ll_add(local);

            }
            copysorted->ll_add(min);
        }
        return copysorted;
    }
};

int main() {
    int pos = 0;
    int size = 0;
    auto* head = new Node;
    auto* node1 = new Node;
    auto* node2 = new Node;
    auto* node3 = new Node;
    auto* node4 = new Node;
    auto* node5 = new Node;

    auto* head2 = new Node;
    auto* node21 = new Node;
    auto* node22 = new Node;
    auto* node23 = new Node;
    auto* node24 = new Node;
    auto* node25 = new Node;

    //1. Liste
    head -> next = node1;
    head ->data = 0;
    node1 -> next = node2;
    node1 -> data = 1;
    node2 -> next = node3;
    node2 -> data = 2;
    node3 -> next = node4;
    node3 -> data = 3;
    node4 -> next = node5;
    node4 -> data = 4;
    node5 -> next = nullptr;
    node5 -> data = 5;

    //2. Liste
    head2 -> next = node21;
    head2 ->data = 20;
    node21 -> next = node22;
    node21 -> data = 21;
    node22 -> next = node23;
    node22 -> data = 22;
    node23 -> next = node24;
    node23 -> data = 23;
    node24 -> next = node25;
    node24 -> data = 24;
    node25 -> next = nullptr;
    node25 -> data = 25;

    //Groeße Zaehlen
    size = head->ll_count();
    std::cout << "Die Liste enthaelt " << size << " Knoten." << std::endl;
    do{
        std::cout << "Bitte gib die Position des gesuchten Knotens an: ";
        std::cin >> pos;
    }while (pos > size);

    //Knoten suchen
    std::cout << "Der Inhalt des Knotens ist: " <<  head->ll_find_d(pos) << std::endl;

    //knoten hinzufuegen
    pos = 3;
    head->ll_add(70);
    //std::cout << "Der Inhalt des Knotens ist: " <<  ll_find_d(head, pos) << std::endl;

    //Liste hinzufuegen
    Node* joined = head->ll_add(head2);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    joined->ll_print();

    //Knoten loeschen
    std::cout << "Welchen Knoten moechtest du loeschen? (eingabe wird nicht ueberprueft)" << std::endl;
    std::cin >> pos;

    joined->ll_delete(pos);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    joined->ll_print();





//Todo: fix sorting!

    //Liste sortieren
    //Node* sorted = joined->ll_sort();

    //Liste ausgeben
    //std::cout << "Die Liste enthaelt: ";
    //sorted->ll_print();

    //Liste loeschen
    joined->ll_delete();
    //sorted->ll_delete();

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    joined->ll_print();
    return 0;
}
