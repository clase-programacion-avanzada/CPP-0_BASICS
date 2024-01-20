/*Full Program example*/
#include <iostream>

#include "libs/Student.h"
#include "libs/StudentList.h"
using namespace std;

void printMenu();
//We will see later the use of the & symbol in the parameters.
void addStudentToStudentList(StudentList &students);
void printStudents(StudentList &students);
void getAverageOfStudents(StudentList &students);
void getStudentWithBestAverage(StudentList &students);
void sortStudentsListByAverage(StudentList &students);


int main ()
{   

    int option = 0;
    StudentList students;
    do
    {
        printMenu();
        cin >> option;

        switch (option)
        {
            case 1:
                addStudentToStudentList(students);
                break;
            case 2:
                printStudents(students);
                break;
            case 3:
                getAverageOfStudents(students);
                break;
            case 4:
                getStudentWithBestAverage(students);
                break;
            case 5:
                sortStudentsListByAverage(students);
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    } while (option != 6);
    
    


    return 0;
}

void printMenu() {
    cout << "Menu" << endl;
    cout << "1. Add a student" << endl;
    cout << "2. Print list of students" << endl;
    cout << "3. get average of students grades" << endl;
    cout << "4. get best student" << endl;
    cout << "5. sort students by average" << endl;
    cout << "6. exit" << endl;
}

void addStudentToStudentList(StudentList &students) {
    string name;
    int age;
    float grades[5];
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the age of the student: ";
    cin >> age;
    cout << "Enter the grades of the student: ";
    for (int i = 0; i < 5; i++) {
        cin >> grades[i];
    }
    Student student(name, age, grades);
    students.addStudent(student);

    cout << "Student added successfully" << endl;

    
}

void printStudents(StudentList &students) {
    
    
    for (int i = 0; i < students.size(); i++) {
        Student student = students.get(i);
        cout << "Student " << i << endl;
        cout << "Name: " << student.name << endl;
        cout << "Age: " << student.age << endl;
        cout << "Grades: ";
        for (int j = 0; j < 5; j++) {
            cout << student.grades[j] << " ";
        }
        cout << endl;
        cout << "Average: " << student.calculateAverage() << endl;
        cout << endl;
    }
}

void getAverageOfStudents(StudentList &students) {
    cout << "The average of the students is: " << students.calculateAverage() << endl;
}

void getStudentWithBestAverage(StudentList &students) {
    Student bestStudent = getBestStudent(students);
    cout << "The best student is: " << bestStudent.name << " with an average of: " << bestStudent.calculateAverage() << endl;
}

void sortStudentsListByAverage(StudentList &students) {
    StudentList sortedStudents = sortStudentsByAverage(students);
    cout << "The students sorted by average are: " << endl;
    printStudents(sortedStudents);

}




