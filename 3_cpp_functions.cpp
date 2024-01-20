/*Functions example*/
#include <iostream>


using namespace std;

//Functions are blocks of code that perform a specific task.
//Functions are used to avoid repeating code.
//Functions are used to make code more readable.
//Functions are used to make code more maintainable.
//Functions are used to make code more reusable.

//Functions are composed of:
    //1. Return type: the type of the value returned by the function.
    //2. Name: the name of the function.
    //3. Parameters: the parameters of the function.
//Functions that are before the main function, without any implementation, are called function prototypes.
//Function prototypes are used to tell the compiler about the existence of a function.
//Function prototypes must be declared before the main function and implemented after the main function.

//Functions can be declared without a return type.
void print_hello_world();

//Functions can be declared with a return type.
int add(int a, int b);

//Functions can be declared with a return type and without parameters.
int get_number();

//Function overloading is the ability to create multiple functions with the same name with different parameters.
int add(int a, int b, int c);


int main ()
{   

    //Let's imagine we want to add two numbers.
    //We don't want to repeat the code to add two numbers.
    //To solve this problem, we can use the add function to add two numbers as well as 
    // the get_number function to get a number from the user.
    cout << "Functions example" << endl;
    cout << "Please enter two numbers " << endl;

    int x = get_number();
    int y = get_number();

    int z = add(x, y);
    
    cout << "The sum of " << x << " and " << y << " is " << z << endl;

    //Function overloading example.

    cout << "Please enter three numbers " << endl;

    int a = get_number();
    int b = get_number();
    int c = get_number();

    int d = add(a, b, c);

    cout << "The sum of " << a << ", " << b << " and " << c << " is " << d << endl;
    //Let's imagine we want to print "Hello World!".
    //We can use the print_hello_world function to print "Hello World!".

    print_hello_world();

    //Notice that function above does not return a value.


    return 0;
}

void print_hello_world()
{
    cout << "Hello World!" << endl;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int get_number()
{
    int x = 0;
    cin >> x;
    return x;
}

