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
    int PosX;
    int PosY;
    type Types[4]; //nord sud est ouest types.
};


#endif //LUTZ_EN_DUNOIS_TUILE_H
