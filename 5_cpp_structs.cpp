/*Structs example*/
#include <iostream>


using namespace std;

//Structs are used to store multiple values in a single variable.

//Structs are composed of:
//1. Type: the type of the values stored in the struct.
//2. Name: the name of the struct.
//3. Members: the members of the struct.

//Structs are similar to classes. We will see classes later.

struct Person
{
    string name;
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;
    float height;
    float weight;

    //Structs can have functions. We will call these functions methods.

    //Structs can have constructors. Constructors are methods that are called when a struct is created.
    //Constructors always have the same name as the struct.
    //Constructors are used to initialize the members of a struct.

    Person() {
        name = "";
        yearOfBirth = 0;
        monthOfBirth = 0;
        dayOfBirth = 0;
        height = 0.0;
        weight = 0.0;
    }

    //Constructors can have parameters.
    Person(string nameOfPerson, 
        int yearOfBirthOfPerson, 
        int monthOfBirthOfPerson, 
        int dayOfBirthOfPerson, 
        float heightOfPerson, 
        float weightOfPerson) {

        name = nameOfPerson;
        yearOfBirth = yearOfBirthOfPerson;
        monthOfBirth = monthOfBirthOfPerson;
        dayOfBirth = dayOfBirthOfPerson;
        height = heightOfPerson;
        weight = weightOfPerson;    
    }

    //Structs can have methods.

    int calculateAge() {
        return 2024 - yearOfBirth;
    }


};

//structs can be sent to functions as parameters.
void printPerson(Person person)
{
    cout << "Name: " << person.name << endl;
    cout << "Year of birth: " << person.yearOfBirth << endl;
    cout << "Month of birth: " << person.monthOfBirth << endl;
    cout << "Day of birth: " << person.dayOfBirth << endl;
    cout << "Height: " << person.height << endl;
    cout << "Weight: " << person.weight << endl;
}

//Structs can be returned from functions.

Person getPersonFromConsole() {
    //When we do this we are creating a new person.
    // this new person is created using the constructor without parameters.
    Person person;

    cout << "Please enter the name of the person: ";
    cin >> person.name;

    cout << "Please enter the year of birth of the person: ";
    cin >> person.yearOfBirth;

    cout << "Please enter the month of birth of the person: ";
    cin >> person.monthOfBirth;

    cout << "Please enter the day of birth of the person: ";
    cin >> person.dayOfBirth;

    cout << "Please enter the height of the person: ";
    cin >> person.height;

    cout << "Please enter the weight of the person: ";
    cin >> person.weight;

    return person;
}


int main ()
{   

    
    //Let's imagine we want to store the information of a person.
    //We can use the Person struct to store the information of a person.

    //We can create a new person using the constructor with parameters.

    Person person1("John", 1990, 1, 1, 1.8, 80.0);

    //We can create a new person using the constructor without parameters.

    Person person2;

    //We can access the members of a struct using the dot operator.

    person2.name = "Mary";
    person2.yearOfBirth = 1995;
    person2.monthOfBirth = 2;
    person2.dayOfBirth = 2;

    //We can use the calculateAge method to calculate the age of a person.

    int ageOfPerson1 = person1.calculateAge();
    int ageOfPerson2 = person2.calculateAge();
    
    cout << "Age of person 1: " << ageOfPerson1 << endl;
    cout << "Age of person 2: " << ageOfPerson2 << endl;

    //We can send structs to functions as parameters.

    printPerson(person1);
    printPerson(person2);

    //We can return structs from functions.

    Person person3 = getPersonFromConsole();

    printPerson(person3);


    return 0;
}


