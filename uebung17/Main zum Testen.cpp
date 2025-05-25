#include <iostream>
#include "Person.h"

int main()
{
	std::cout << "Ausgabe einer neuen Instanz ohne Angabe von Werten.\n";
	Person leer;
	leer.ausgabe();

	std::cout << "\nAusgabe einer unvollstaendigen Person.\n";
	Person unvollstaendig;
	unvollstaendig.set_vorname("Martina");
	unvollstaendig.ausgabe();

	std::cout << "\nAusgabe einer Person mit NULL-Werten und zu hohem Alter.\n";
	Person bloede_werte(NULL, "Vorname", 734);
	bloede_werte.ausgabe();

	std::cout << "\nAusgabe einer Person instanziiert mit einem ueberladenen Konstruktor\n";
	Person dozent("Carsten", "Biemann", 12);
	dozent.ausgabe();

	std::cout << "\nKopierkonstruktor:\n";
	Person kopie = dozent;
	kopie.ausgabe();

	std::cout << "\nWerte nachtraeglich aendern:\n";
	kopie.set_vorname("Martina");
	kopie.set_nachname("Muster");
	kopie.set_alter(21);
	kopie.ausgabe();

	std::cout << "\nZuweisungsoperator:\n";
	kopie = dozent;
	kopie.ausgabe();

	std::cout << "\nVergleich zweier Personen (immer zuerst nach Nachname, danach nach Vorname):";
	Person martina("Martina", "Muster", 21);
	Person martin("Martin", "Mustermann", 22);

	std::cout << "\nSollte unterschiedlich sein: " << ((martina == martin) ? "identisch" : "unterschiedlich");	// ternäre Operator
	std::cout << "\nSollte identisch sein: " << ((martina != martina) ? "unterschiedlich" : "identisch");
	martin.set_nachname("Muster");
	std::cout << "\nSollte immernoch unterschiedlich sein: " << ((martina == martin) ? "identisch" : "unterschiedlich");
	std::cout << "\nSollte kleiner sein: " << ((martin < martina) ? "kleiner" : "nicht kleiner");
	std::cout << "\nSollte nicht groesser sein: " << ((martin > martina) ? "groesser" : "nicht groesser");
	martin = martina;
	martin.set_alter(22);
	std::cout << "\nSollte identisch sein: " << ((martina == martina) ? "identisch" : "unterschiedlich");
	std::cout << std::endl << std::endl;
}

