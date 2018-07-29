//
// Created by Julien2 on 28/07/2018.
//

#include "Tuile.h"
#include <vector>

#ifndef LUTZ_EN_DUNOIS_LISTETUILE_H
#define LUTZ_EN_DUNOIS_LISTETUILE_H

class ListeTuile{
public:
    std::vector<Tuile> liste;
    void create(std::vector<Tuile> myliste);
    void addTuile(std::vector<Tuile> myliste,int PosX, int PosY, bool abbaye, bool blazon, type Nord, type Sud, type Est, type Ouest);

private:
};

#endif //LUTZ_EN_DUNOIS_LISTETUILE_H
