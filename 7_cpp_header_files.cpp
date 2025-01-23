/*Header files example*/
#include <iostream>

//header files are included using the #include preprocessor directive
#include "libs/Student.h"

using namespace std;


int main ()
{   

    //As we have included the header file Student.h, we can use the struct Student in this file.
    Student student1;

    student1.name = "Peter";
    student1.age = 18;
   
    student1.grades[0] = 9.5;
    student1.grades[1] = 8.5;
    student1.grades[2] = 5.5;
    student1.grades[3] = 6.3;
    student1.grades[4] = 5.1;

    float grades[5] = {10.0, 9.0, 8.0, 7.0, 6.0};
    Student student2("John", 20, grades);

    Student bestStudent = getStudentWithGreaterAverage(student1, student2);
    cout << "best of the two students is: " << bestStudent.name 
        << " with an average of :" << bestStudent.calculateAverage() << endl;


    return 0;
}



