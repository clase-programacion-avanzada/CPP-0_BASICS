#ifndef STUDENT_LIST_H

#define STUDENT_LIST_H

#include "Student.h"

using namespace std;


struct StudentList {
    
    Student students[100];
    int numberOfStudents;

    StudentList() {
        numberOfStudents = 0;
    }

    void addStudent(Student student) {
        students[numberOfStudents] = student;
        numberOfStudents++;
    }

    bool removeStudent(string name) {
        for (int i = 0; i < numberOfStudents; i++) {
            if (students[i].name == name) {
                for (int j = i; j < numberOfStudents - 1; j++) {
                    students[j] = students[j + 1];
                }
                numberOfStudents--;
                return true;
            }
        }
        return false;
    }

    Student get(int index) {
        return students[index];
    }

    bool set(int index, Student student) {
        if (index >= 0 && index < numberOfStudents) {
            students[index] = student;
            return true;
        }
        return false;
    }

    int size() {
        return numberOfStudents;
    }

    StudentList copy() {
        StudentList copy;
        for (int i = 0; i < numberOfStudents; i++) {
            copy.addStudent(students[i]);
        }
        return copy;
    }

    float calculateAverage() {
        float sum = 0.0;
        for (int i = 0; i < numberOfStudents; i++) {
            sum += students[i].calculateAverage();
        }
        return sum / numberOfStudents;
    }

};

StudentList sortStudentsByAverage(StudentList studentList) {
    
    StudentList sortedStudentsByAverage = studentList.copy();
    
    for (int i = 0; i < sortedStudentsByAverage.size(); i++) {
        for (int j = i + 1; j < sortedStudentsByAverage.size(); j++) {
            Student student1 = sortedStudentsByAverage.get(i);
            Student student2 = sortedStudentsByAverage.get(j);
            if (student1.calculateAverage() < student2.calculateAverage()) {
                sortedStudentsByAverage.set(i, student2);
                sortedStudentsByAverage.set(j, student1);
            }
        }
    }

    return sortedStudentsByAverage;
}

Student getBestStudent(StudentList studentList) {
    StudentList sortedStudentsByAverage = sortStudentsByAverage(studentList);
    return sortedStudentsByAverage.get(sortedStudentsByAverage.size() - 1);
}

StudentList getStudentsWithAverageGreaterOrEqualThan(StudentList studentList, float average) {
    StudentList studentsWithAverageGreaterOrEqualThan;
    for (int i = 0; i < studentList.size(); i++) {
        Student student = studentList.get(i);
        if (student.calculateAverage() >= average) {
            studentsWithAverageGreaterOrEqualThan.addStudent(student);
        }
    }
    return studentsWithAverageGreaterOrEqualThan;
}

StudentList getStudentsWithAverageLessThan(StudentList studentList, float average) {
    StudentList studentsWithAverageLessThan;
    for (int i = 0; i < studentList.size(); i++) {
        Student student = studentList.get(i);
        if (student.calculateAverage() < average) {
            studentsWithAverageLessThan.addStudent(student);
        }
    }
    return studentsWithAverageLessThan;
}






//Finishing the header file
#endif