/*Cpp programs are composed of different parts*/
// 1. Preprocessor Directives: preprocessor directives are lines preceded by a hash sign (#). 
// These lines are processed by the preprocessor before the compilation of source code begins.

//Libraries are included using the preprocessor directive #include
// In this case, we are including the library iostream, which contains the definitions of the objects cout, cin, etc.
#include <iostream>

//Opriional: we can use the directive using namespace std to avoid using std::cout, std::cin, std::endl, etc.
using namespace std;

// 2. Functions: a C++ program contains one or more functions. 
// The main function is the starting point of execution of the program.
int main ()
{
  //3. Variables: a variable is a name given to a memory location.
  // It is the basic unit of storage in a program.
  // The value stored in a variable can be changed during program execution.
  // A variable is only a name given to a memory location, 
  // all the operations done on the variable effects that memory location.
  // In C++, all the variables must be declared before use. 
  // They must be assigned a data type.
  // Main data types are: int, float, double, char, bool.
  char a = 'a';
  int b = 1;
  float c = 1.1;
  double d = 1.1;
  bool e = true;

  //4. Statements & Expressions: Statements are instructions that perform some action.
  // Expressions are combinations of operators, constants and variables that yield a result value.
  // Statements are composed of one or more expressions.
  // The expression 2 + 3 is a statement itself.

  int x = 2 + 3;

  //We can print the value of a variable using the cout object and the << operator.
  cout << "The value of x is: " << x << endl;

  //We can read the value of a variable using the cin object and the >> operator.
  cout << "Please enter a number value for x: ";
  cin >> x;
  cout << "The value of x is: " << x << endl;

  return 0;
}