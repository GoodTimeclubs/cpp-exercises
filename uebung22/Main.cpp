#include <iostream>
#include "Person.h"
#include "Dozent.h"
#include "Student.h"
#include "Mitarbeiter.h"

int main()
{
	Person* rando = new Student ("Ben", "Gutzeit", 22, "kek123");

	rando->ausgabe();

	delete (rando);

}

