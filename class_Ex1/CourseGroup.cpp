//
// Created by Tal Koren on 28/02/2022.
//
#include "CourseGroup.h"
#include "Course.h"
#include "Enums.h"
 std::ostream& operator<<(std::ostream& out, const CourseGroup& group){
     return out << *(group.course)
                << ", Year: " << group.year
                <<" , Semester: " << semesterName(group.semester)
                << ", group number: " << group.groupNumber;
}

