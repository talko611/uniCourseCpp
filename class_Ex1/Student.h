//
// Created by Tal Koren on 28/02/2022.
//

#ifndef CLASS_EX1_STUDENT_H
#define CLASS_EX1_STUDENT_H
#include <string>
#include <iostream>
#include <vector>
#include "CourseGroup.h"

class Student{
    const long id;
    std::string firstName;
    std::string lastName;
    std::vector <const CourseGroup*> myCourses;

public:
    Student(long id1, const std::string& firstname1, const std::string lastName1 ) : id(id1), firstName(firstname1), lastName(lastName1){}

    void addCourse( const CourseGroup& cg){
        myCourses.push_back(&cg);
    }

    void printCourses();

    friend std::ostream& operator<<(std::ostream& out, const Student& s){
        return out << s.id << ":" << s.firstName << ", " << s.lastName;
    }

};
#endif //CLASS_EX1_STUDENT_H
