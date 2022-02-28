//
// Created by Tal Koren on 28/02/2022.
//

#ifndef CLASS_EX1_COURSE_H
#define CLASS_EX1_COURSE_H
#include <string>
#include <iostream>
#include "Enums.h"

class Degree;

class Course {
    Degree* degree;
    std::string name;
    CourseType type;
    int points;

public:
    Course(Degree *degree, const std::string &name, CourseType type, int points);
    friend std::ostream& operator<<(std::ostream& out, const Course& d);

    const std::string &getName() const;

};


#endif //CLASS_EX1_COURSE_H
