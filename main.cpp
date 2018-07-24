#include <iostream>
#include "Tuile.h"


int main() {

    auto *tuile = new Tuile(0,0, true, CHAMP,VILLE,ROUTE,CHAMP);
    tuile->print();
    return 0;
}