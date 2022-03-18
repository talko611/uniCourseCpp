//
// Created by Tal Koren on 18/03/2022.
//

#ifndef CLASS_EX2_PERSONFACE_H
#define CLASS_EX2_PERSONFACE_H
#include "Eyes.h"
#include <iostream>

class PersonFace {
    Eyes myEyes;
    double hairLength;
    int numOfTeeth;

public:
    PersonFace(double hairLength = 5.5, int numOfTeeth = 28);

    PersonFace(const Eyes &myEyes, double hairLength = 5.5, int numOfTeeth = 28);

    void print();

    virtual ~PersonFace();
};


#endif //CLASS_EX2_PERSONFACE_H
