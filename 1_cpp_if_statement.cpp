#include <iostream>


using namespace std;


int main ()
{
    //We can use the if statement to execute a block of code if a condition is true.
    //The condition is specified using a boolean expression.
    //The boolean expression can be a comparison between two values.
    //The boolean expression can be a logical expression.
    //The boolean expression can be a combination of both.

    //Comparison operators: ==, !=, >, <, >=, <=
    //Logical operators: &&, ||, !

    int x = 0;
    cout << "Please enter a number value for x: ";
    cin >> x;

    //boolean expressions can be assigned to variables
    bool is_greater_than_5 = x > 5;
    bool is_equal_to_5 = x == 5;
    bool is_less_than_5 = x < 5;

    //We can use the if statement to execute a block of code if a condition is true.
    if (is_greater_than_5)
    {
        cout << "x is greater than 5" << endl;
    }

    //We can use the else statement to execute a block of code if the condition is false.
    if (is_greater_than_5)
    {
        cout << "x is greater than 5" << endl;
    }
    else
    {
        cout << "x is less than or equal to 5" << endl;
    }

    //We can use logical operators to combine boolean expressions.
    if(is_greater_than_5 && is_equal_to_5)
    {
        cout << "x is greater than 5 and equal to 5" << endl;
    }
    else if(is_greater_than_5 && is_less_than_5)
    {
        cout << "x is greater than 5 and less than 5" << endl;
    }
    else if(is_greater_than_5 || is_equal_to_5)
    {
        cout << "x is greater than 5 or equal to 5" << endl;
    }
    else if(is_greater_than_5 || is_less_than_5)
    {
        cout << "x is greater than 5 or less than 5" << endl;
    }
    else if(!is_greater_than_5)
    {
        cout << "x is not greater than 5" << endl;
    }
    else
    {
        cout << "x is less than or equal to 5" << endl;
    }


  return 0;
}