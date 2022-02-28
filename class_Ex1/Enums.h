//
// Created by Tal Koren on 28/02/2022.
//

#ifndef CLASS_EX1_ENUMS_H
#define CLASS_EX1_ENUMS_H
#include <string>

enum class CourseType {Mandatory, Elective};
enum class Semester {A, B, Summer};

inline std::string courseTypeName(CourseType type){
    static std::string courseNames[] = {"Mandatory", "Elective"};
    return courseNames[(int) type];
}

inline std::string semesterName(Semester name){
    static std::string names[] = {"A", "B", "Summer"};
    return names[(int) name];
}
#endif //CLASS_EX1_ENUMS_H
