#include <iostream>
#include "Student.h"
#include "Degree.h"
#include "Course.h"
#include "CourseGroup.h"
#include "Enums.h"

int main() {
    Student tal(31245, "Tal", "Koren");

    Degree cs("CS");
    Course cpp(&cs, "c++", CourseType::Mandatory, 4);
    Course dataStructures(&cs, "data structures", CourseType::Mandatory, 5);

    CourseGroup cpp_2022_semB_01(&cpp, 2022, Semester::B, 1);
    CourseGroup dataStructures_2022_Summer_02(&dataStructures, 2022, Semester::Summer,2);
    tal.addCourse(cpp_2022_semB_01);
    tal.addCourse(dataStructures_2022_Summer_02);
    tal.printCourses();


}
