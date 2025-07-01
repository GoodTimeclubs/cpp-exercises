#include <iostream>
#include "Person.h"
#include "Dozent.h"
#include "Student.h"
#include "Mitarbeiter.h"

int main()
{
	Person rando("Random","dude",12);
	Student ben("Ben", "Gutzeit", 22, "123456");
	Dozent dozi("Do", "Zi", 99, "Feierabendgeschichten");
	Mitarbeiter hausmeister("Werner", "Berner", 76, 643523);
	Mitarbeiter schnorrer;
	Mitarbeiter schnorrer2;

	rando.ausgabe();
	ben.ausgabe();
	dozi.ausgabe();
	hausmeister.ausgabe();

	schnorrer2 = schnorrer = hausmeister;

	schnorrer2.ausgabe();
}

