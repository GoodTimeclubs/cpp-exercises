/*
 * Main.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */
#include "MyString.h"
#include <iostream>
#include "Preis.h"
#include "Produkt.h"
#include "Produkt.cpp"
#include "Buch.h"
#include "Elektronik.h"
#include <vector>

int main(){
	std::vector<Produkt<MyString>*> list;

	list.push_back(new Buch<MyString> ((char*)"Leben des Brian",250,9,99));
	list.push_back(new Elektronik<MyString> ((char*)"Playstation",399,99));

	for(Produkt<MyString>* p : list){
		std::cout << *p <<std::endl;
	}

	for(Produkt<MyString>* p : list){
			delete p;
	}
}

