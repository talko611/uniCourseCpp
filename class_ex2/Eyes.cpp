//
// Created by Tal Koren on 18/03/2022.
//
#include "Eyes.h"



Eyes :: Eyes(const Eyes& other){
    eyesColor = other.eyesColor;
    lashesLength = other.lashesLength;
    eyeBrowWidth = other.eyeBrowWidth;
    std::cout << "use copy constructor\n";
    printEyes();
}

void Eyes :: printEyes(){
    std::cout << "Eyes color: " << eyesColor << std::endl
              << "Lashes length: " << lashesLength << std::endl
              << "Eye brow width: " << eyeBrowWidth << std::endl;
}

Eyes::Eyes(const std::string &eyesColor, double lashesLength, double eyeBrowWidth) : eyesColor(eyesColor),
                                                                                     lashesLength(lashesLength),
                                                                                     eyeBrowWidth(eyeBrowWidth) {
    std::cout << "use regular constructor\n";
    printEyes();
}
