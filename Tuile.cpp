//
// Created by Gulrupa on 23/07/2018.
//

#include "Tuile.h"
#include <iostream>

Tuile::Tuile(int PosX, int PosY, bool abbaye, bool blazon, type Nord, type Sud, type Est, type Ouest) {
    this->PosX = PosX;
    this->PosY = PosY;
    this->abbaye = abbaye;
    this->blazon = blazon;
    this->Nord = Nord;
    this->Sud = Sud;
    this->Est = Est;
    this->Ouest = Ouest;
}

void Tuile::print() {
    std::cout << "  " << Nord << "  " << std::endl;
    std::cout << Ouest << "   " << Est << std::endl;
    std::cout << "  " << Sud << "  " << std::endl;
}
