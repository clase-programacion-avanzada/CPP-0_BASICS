/*Menu example*/
#include <iostream>


using namespace std;

void printMenu();

int main ()
{   

    //Normally in a program we want to execute different blocks of code depending on the user input.
    //We can use the switch statement to execute a block of code depending on the value of a variable.

    //The switch statement is composed of:

    //1. Variable: the variable to be evaluated.
    //2. Case: the value of the variable to be evaluated.
    //3. Break: the break statement is used to exit the switch statement.

    //The switch statement is similar to the if statement.

    //The switch statement is used when we want to execute a block of code depending on the value of a variable.

    //In this example we will create a menu using the switch statement.
    int option = 0;

    do
    {
        printMenu();
        cin >> option;

        switch (option)
        {
            case 1:
                cout << "Option 1 selected" << endl;
                break;
            case 2:
                cout << "Option 2 selected" << endl;
                break;
            case 3:
                cout << "Option 3 selected" << endl;
                break;
            case 4:
                cout << "Option 4 selected" << endl;
                break;
            case 5:
                cout << "Option 5 selected" << endl;
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
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Option 3" << endl;
    cout << "4. Option 4" << endl;
    cout << "5. Option 5" << endl;
    cout << "6. exit" << endl;
}


