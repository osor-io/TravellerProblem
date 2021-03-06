//
// Created by Rubén Osorio López on 2/12/16.
//

#ifndef TRAVELLERPROBLEM_BETTERTABUSEARCH_DISTANCEMATRIXWRAPPER_H
#define TRAVELLERPROBLEM_BETTERTABUSEARCH_DISTANCEMATRIXWRAPPER_H



#define MU 0.005


void initWrapper();

float getWeightedCost(unsigned int x, unsigned int y);

void addFrec(unsigned int x, unsigned int y);

void destroyWrapper();

double frecParameter();

#endif //TRAVELLERPROBLEM_BETTERTABUSEARCH_DISTANCEMATRIXWRAPPER_H
