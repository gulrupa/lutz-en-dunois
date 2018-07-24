//
// Created by Gulrupa on 23/07/2018.
//

#ifndef LUTZ_EN_DUNOIS_TUILE_H
#define LUTZ_EN_DUNOIS_TUILE_H

enum type {
    VILLE,
    ROUTE,
    RIVIERE,
    CHAMP
};


class Tuile {
public:
    Tuile(int PosX, int PosY, bool abbaye, type Nord, type Sud, type Est, type Ouest);
    void print();

private:
    int PosX;
    int PosY;
    bool abbaye; //by julien voisin
    type Nord;
    type Sud;
    type Est;
    type Ouest;
};



#endif //LUTZ_EN_DUNOIS_TUILE_H
