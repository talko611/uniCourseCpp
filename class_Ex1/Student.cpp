//
// Created by Tal Koren on 28/02/2022.
//

#include "Student.h"

void Student :: printCourses(){
    std::cout << "ALL courses: "<< std::endl;
    for(auto pCourse : myCourses){
        std::cout << *pCourse << std::endl;
    }
}