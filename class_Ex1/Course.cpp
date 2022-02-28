//
// Created by Tal Koren on 28/02/2022.
//

#include "Course.h"
#include "Degree.h"

Course::Course(Degree *degree, const std::string &name, CourseType type, int points) : degree(degree), name(name),
                                                                                       type(type), points(points) {}

 std:: ostream& operator<<(std::ostream& out, const Course& c){
     return out << "Course name: " << c.name
                << ", course type: " << courseTypeName(c.type)
                << ", points: " << c.points
                << " (degree: " << *(c.degree) << ")";
}

const std::string &Course::getName() const {
    return name;
}
