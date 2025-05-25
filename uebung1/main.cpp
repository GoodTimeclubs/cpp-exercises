#include <iostream>

struct Node{
  Node* next;
  int data;
};
int ll_count(const struct Node* head) { //Anzahl Elemente zaehlen
    int count = 0;
    while (head != nullptr) {
        head = head->next;
        count++;
    }
    return count;
}
struct Node* ll_find_k(struct Node* head, const int pos) { //Knoten an Position x finden
    int i = 0;
    while(i != pos){
        head = head ->next;
        i++;
    }
    return head;
}

int ll_find_d(struct Node* head, const int pos) { //Inhalt an Position x finden
    return ll_find_k(head, pos) ->data;
}

void ll_add(struct Node* head, const int data) { //Neues Element ans Ende anhaengen
    while (head->next != nullptr) {
        head = head->next;
    }
    auto *temp = new struct Node;
    temp->data = data;
    temp->next = nullptr;
    head->next = temp;

}

void ll_add(struct Node* head, const int data, const int pos){ //Einfuegen eines Elements an Position x
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

struct Node* ll_add(struct Node* head1, struct Node* head2) { //Neue Liste ans Ende anhaengen
    struct Node* temp = head1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
}

void ll_print(const struct Node* head) { // Ausgeben der ganzen Liste (mit Komma getrennt, am Ende Punkt)
    bool exit = false;
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

void ll_delete(struct Node* head, const int pos) { //Element an Position x loeschen
    struct Node* before = ll_find_k(head,pos-1);
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

void ll_delete(struct Node* &head, char choice = 'n') { //Loeschen der ganzen Liste
    struct Node* temp = head->next;
    std::cout << "Willst du wirklich die ganze Liste mit " << ll_count(head) << " Knoten loeschen? (y|n)" << std::endl;
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

struct Node*  ll_sort(struct Node* &head) {//TODO: Sortieren der Liste nach ihren Inhalten aufsteigend
    auto* copy = new struct Node;
    auto* copy2 = new struct Node;
    auto* copysorted = new struct Node;
    int i2 = 0;
    int min = 0;
    int lastmax = 0;

    for (int i3 = 0; i3 < ll_count(copy); i3++) {
        copy2 = copy;
        ll_delete(copy, 'y');
        copy = new struct Node;
        for (int i = 0; i < ll_count(copy2); i++) {
            int local = ll_find_d(copy2, i);
            if (local<min) min = local;
            else ll_add(copy,local);

        }
        ll_add(copysorted, min);
    }
    return copysorted;
}




int main() {
    int pos = 0;
    int size = 0;
    auto* head = new struct Node;
    auto* node1 = new struct Node;
    auto* node2 = new struct Node;
    auto* node3 = new struct Node;
    auto* node4 = new struct Node;
    auto* node5 = new struct Node;

    auto* head2 = new struct Node;
    auto* node21 = new struct Node;
    auto* node22 = new struct Node;
    auto* node23 = new struct Node;
    auto* node24 = new struct Node;
    auto* node25 = new struct Node;

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
    size = ll_count(head);
    std::cout << "Die Liste enthaelt " << size << " Knoten." << std::endl;
    do{
        std::cout << "Bitte gib die Position des gesuchten Knotens an: ";
        std::cin >> pos;
    }while (pos > size);

    //Knoten suchen
    std::cout << "Der Inhalt des Knotens ist: " <<  ll_find_d(head, pos) << std::endl;

    //knoten hinzufuegen
    pos = 3;
    ll_add(head, 70,pos);
    //std::cout << "Der Inhalt des Knotens ist: " <<  ll_find_d(head, pos) << std::endl;

    //Liste hinzufuegen
    struct Node* joined = ll_add(head, head2);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    ll_print(joined);

    //Knoten loeschen
    std::cout << "Welchen Knoten moechtest du loeschen? (eingabe wird nicht ueberprueft)" << std::endl;
    std::cin >> pos;

    ll_delete(joined, pos);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    ll_print(joined);

    //Liste sortieren
    struct Node* sorted = ll_sort(joined);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    ll_print(sorted);

    //Liste loeschen
    ll_delete(joined);
    ll_delete(sorted);

    //Liste ausgeben
    std::cout << "Die Liste enthaelt: ";
    ll_print(sorted);
    return 0;
}
