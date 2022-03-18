//
// Created by Tal Koren on 18/03/2022.
//

#include "PersonFace.h"


PersonFace::PersonFace(double hairLength, int numOfTeeth) : hairLength(hairLength), numOfTeeth(numOfTeeth) {
    std::cout << "use person face C'tor \n";
    print();
}

PersonFace::PersonFace(const Eyes &myEyes, double hairLength, int numOfTeeth) : myEyes(myEyes), hairLength(hairLength),
                                                                                numOfTeeth(numOfTeeth) {
    std::cout<< "use person face C'tor 2\n";
    print();
}

void PersonFace::print() {
    std::cout << "hair length:" << hairLength << std::endl
                << "num of teeth : " << numOfTeeth << std::endl;
    myEyes.printEyes();
}

PersonFace::~PersonFace() {
    std::cout << "use person face distructor\n";
}
