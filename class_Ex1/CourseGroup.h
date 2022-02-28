//
// Created by Tal Koren on 28/02/2022.
//

#ifndef CLASS_EX1_COURSEGROUP_H
#define CLASS_EX1_COURSEGROUP_H
#include "Enums.h"

class Course;

class CourseGroup {
    Course* course;
    short int year;
    Semester semester;
    short int groupNumber;
public:
    CourseGroup(Course *course, short year, Semester semester, short groupNumber) : course(course), year(year),
                                                                                    semester(semester),
                                                                                    groupNumber(groupNumber) {}

    friend std::ostream& operator<<(std::ostream& out, const CourseGroup& s);


};


#endif //CLASS_EX1_COURSEGROUP_H
