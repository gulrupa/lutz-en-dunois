//
// Created by Julien2 on 28/07/2018.
//

#include "ListeTuile.h"
#include <vector>

//ajout d'une Tuile à la fin de la liste
void ListeTuile::addTuile(std::vector<Tuile> myliste, int PosX, int PosY, bool abbaye, bool blazon, type Nord, type Sud, type Est, type Ouest){

    Tuile *temp = new Tuile(PosX,PosY,abbaye,blazon,Nord,Sud,Est,Ouest);
    myliste.push_back(*temp);

}

//création de la liste de Tuile en entier
void ListeTuile::create(std::vector<Tuile> myliste) {

    myliste.clear(); // on s'assure que la liste est vide

    // ajout des tuiles par paquets identiques

    for (int nb_tuile=0; nb_tuile<2; ++nb_tuile){
        addTuile(myliste,0,0,true,false,CHAMP,ROUTE,CHAMP,CHAMP); // Tuile A
    }
    for (int nb_tuile=0; nb_tuile<4; ++nb_tuile){
        addTuile(myliste,0,0,true,false,CHAMP,CHAMP,CHAMP,CHAMP); // Tuile B
    }
    addTuile(myliste,0,0,false,false,CHAMP,ROUTE,CHAMP,CHAMP); // Tuile C
    for (int nb_tuile=0; nb_tuile<3; ++nb_tuile){
        addTuile(myliste,0,0,false,false,VILLE,CHAMP,ROUTE,ROUTE); // Tuile D
    }
    for (int nb_tuile=0; nb_tuile<5; ++nb_tuile){
        addTuile(myliste,0,0,false,false,VILLE,CHAMP,CHAMP,CHAMP); // Tuile E
    }
    for (int nb_tuile=0; nb_tuile<2; ++nb_tuile){
        addTuile(myliste,0,0,false,true,CHAMP,CHAMP,VILLE,VILLE); // Tuile F
    }
    addTuile(myliste,0,0,false,false,CHAMP,CHAMP,VILLE,VILLE); // Tuile G
    for (int nb_tuile=0; nb_tuile<3; ++nb_tuile){
        addTuile(myliste,0,0,false,false,CHAMP,CHAMP,VILLE,VILLE); // Tuile H
    }
    /* à compléter
     * régler pb ville pas reliées/reliées
     * */

}
