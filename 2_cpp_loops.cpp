#include <iostream>


using namespace std;


int main ()
{   
    //We can use loops to execute a block of code multiple times.
    
    /*While*/
    //The while loop executes a block of code while a condition is true.
    //The condition is specified using a boolean expression.

    int x = 0;
    cout << "While loop example" << endl;
    while (x < 5)
    {
        cout << "x value is " << x << endl;
        x++;
    }

    /*Do-While*/
    //The do-while loop executes a block of code while a condition is true.
    //The condition is specified using a boolean expression.
    //The condition is evaluated after the execution of the block of code.

    int y = 5; 
    cout << "Do-While loop example" << endl;
    do
    {
        cout << "y value is " << y << endl;
        y++;
    } while (y < 5);

    /*For*/

    //The for loop executes a block of code while a condition is true.
    //The condition is specified using a boolean expression.
    //The condition is evaluated before the execution of the block of code.
    //The for loop is composed of three parts:
    //1. Initialization: the initialization of the loop variable.
    //2. Condition: the condition to be evaluated before the execution of the block of code.
    //3. Increment: the increment of the loop variable.

    cout << "For loop example" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "i value is " << i << endl;
    }

    


    return 0;
}