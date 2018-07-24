#include <iostream>
#include "Tuile.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Tuile *tuile = new Tuile(0,0, true, CHAMP,VILLE,ROUTE,CHAMP);
    tuile->print();
    return 0;
}