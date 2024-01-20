// /*Header file example*/
//A header file is a file containing C++ declarations and definitions 
//that can be shared between several C++ source files.
//A header file has the following format:

//defining the header file name
#ifndef STUDENT_H
//defining the header file name
#define STUDENT_H

//including the libraries needed
#include <string>
//defining the namespace used
using namespace std;

//defining the code that will be included in the header file

struct Student {
    
    string name;
    int age;
    float grades[5];

    Student() {
        name = "";
        age = 0;
        for (int i = 0; i < 5; i++) {
            grades[i] = 0.0;
        }
    }

    Student(string nameOfStudent, int ageOfStudent, float gradesOfStudent[5]) {
        name = nameOfStudent;
        age = ageOfStudent;
        for (int i = 0; i < 5; i++) {
            grades[i] = gradesOfStudent[i];
        }
    }

    float calculateAverage() {
        float sum = 0.0;
        for (int i = 0; i < 5; i++) {
            sum += grades[i];
        }
        return sum / 5.0;
    }


};

Student getStudentWithGreaterAverage(Student student1, Student student2) {
    if (student1.calculateAverage() > student2.calculateAverage()) {
        return student1;
    } else {
        return student2;
    }
}


//Finishing the header file
#endif