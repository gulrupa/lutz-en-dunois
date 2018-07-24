#include <iostream>
#include "Tuile.h"


int main() {

    auto *tuile = new Tuile(0,0, true, false, CHAMP,VILLE,ROUTE,CHAMP);
    tuile->print();
    return 0;
}