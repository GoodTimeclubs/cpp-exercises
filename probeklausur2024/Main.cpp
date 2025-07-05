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
#include "Buch.cpp"

int main(){
	MyString text((char*)"Test Buch");
	Buch<MyString> test(text,4,6,7);
	std::cout << test;


}

