//
// Created by Tal Koren on 28/02/2022.
//

#ifndef CLASS_EX1_DEGREE_H
#define CLASS_EX1_DEGREE_H
#include <string>

class Degree{
    std::string degree;
public:
    Degree(const std::string degree1) : degree(degree1){}

    friend std::ostream& operator<<(std::ostream& out, const Degree& d){
        return out<< d.degree;
    }
};
#endif //CLASS_EX1_DEGREE_H
