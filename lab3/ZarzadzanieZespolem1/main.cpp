#include <iostream>
#include "Zespol.h"
#include "Programista.h"

using namespace std;

int main() {
    Zespol mojZespol;

    Programista prog1("Jan", "Kowalski");
    Programista prog2("Anna", "Nowak");

    mojZespol.dodajProgramiste(prog1);
    mojZespol.dodajProgramiste(prog2);

    mojZespol.wyswietlSklad();

    return 0;
}
