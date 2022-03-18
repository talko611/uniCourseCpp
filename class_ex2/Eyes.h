//
// Created by Tal Koren on 18/03/2022.
//

#ifndef CLASS_EX2_EYES_H
#define CLASS_EX2_EYES_H
#include <string>
#include <utility>
#include <iostream>


class Eyes {
    std::string eyesColor;
    double lashesLength;
    double eyeBrowWidth;

public:
    Eyes(const std::string &eyesColor = "blue", double lashesLength = 1, double eyeBrowWidth = 0.5);

    Eyes(const Eyes& other);

    void printEyes();

    ~Eyes(){
        std::cout << "use destructor \n";
    }
};



#endif //CLASS_EX2_EYES_H
