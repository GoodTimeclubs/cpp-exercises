#include <iostream>
#include "List.h"
#include "List.cpp"
#include "Node.cpp"

int main() {

	List<double> kek;

	kek+3.5+2.674738+3.8;

	kek.print();

	List<std::string> list;

	list+"Du"+"bist"+"ein"+"kek";
	list.print();

    return 0;
}
