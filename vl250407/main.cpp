#include <iostream>
//ToDo:Übung anmelden

void inkrementiere(int &i) { //& um das selbe i zu verwenden und direkt dort hineinzuschreiben
    i++;
}




int main() {

    int i = 0;
    { // unterteilter Güligkeitsbereich in Klasse für namespace
        using namespace std;
        cout << "Bitte gib eine Zahl ein:" << std::endl;
        cin >> i;
    }
    std::cout << "du hast die " << i << " eingegeben" << std::endl;



    //Zeichenketten
    const char* string = "ABC"; //nicht veränderbare Variable wegen const
    char string2[] = {'A', 'B', 'C', 0};
    wchar_t string3[] = L"ÄÖÜ"; //Speicherung in UTF8
    char16_t string4[] = u"ÄÖÜ"; //Speicherung in UTF16

    std::string string6 = "ABC"; // verwenden wir
    std::string string7 = string6 + "DEF";

    const char* string8 = R"(ABCDEFGHIJK,
du "kek")";
    std::cout << string8 << std::endl;

    std::cout << "Vorher: " << i << std::endl;
    inkrementiere(i);
    std::cout << "Nachher: " << i << std::endl;

    for (int x = 0; x < 10; x++) { //x nur in Schleife verfügbar

    }

    int8_t test = -128; //8bit int
    u_int8_t test2 = 255;

    std::size_t index = 0;

    return 0;
}