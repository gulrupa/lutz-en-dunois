//
// Created by Gulrupa on 23/07/2018.
//

#include "Tuile.h"

#ifndef LUTZ_EN_DUNOIS_MAP_H
#define LUTZ_EN_DUNOIS_MAP_H

class Map{
public :
    void AffichageGrille;
    bool PoseTuile(int x,int y);
private :
    int GrilleDeJeu[140][140]; //on stock le numéro de la tuile à la case correspondant à sa position
};



#endif //LUTZ_EN_DUNOIS_MAP_H
