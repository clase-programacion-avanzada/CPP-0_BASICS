/*Arrays and matrix example*/
#include <iostream>


using namespace std;

//Arrays can be sent to functions as parameters.
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
}

//Arrays can be returned from functions, but we will see this later.
//As of now, if you want to return an array take into account that information that is changed inside 
// a function is reflected when arrays are sent as argument in the parameters.

void add_one_to_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] + 1;
    }
}

//Matrix can be sent to functions as parameters. 
// In this case, we need to specify the number of columns of the matrix.

void print_matrix(int matrix[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i << endl;
        for (int j = 0; j < columns; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
        }
    }
}

//Matrix can be returned from functions, but we will see this later.

//As in the case of arrays, information that is changed inside a function is reflected when matrices are sent as argument in the parameters.

void add_one_to_matrix(int matrix[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i << endl;
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = matrix[i][j] + 1;
        }
    }
}

int main ()
{   

    //Arrays are used to store multiple values in a single variable.

    //Arrays are composed of:
    //1. Type: the type of the values stored in the array.
    //2. Name: the name of the array.
    //3. Size: the size of the array.

    int array[5];

    //We can access the elements of an array using the index of the element.
    //The index of the first element is 0.
    //The index of the last element is the size of the array minus 1.

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    //We can use a for loop to iterate over the elements of an array.

    cout << "Array example" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    //We can use the sizeof operator to get the size of an array.

    cout << "The size of the array is " << sizeof(array) / sizeof(array[0]) << endl;

    //We can use the sizeof operator to get the size of a variable.

    cout << "The size of the int variable is " << sizeof(int) << endl;

    //Arrays can be initialized with values.

    int array2[5] = {1, 2, 3, 4, 5};

    //Size of arrays must be known at compile time and cannot be changed at runtime.

    /*Matrix*/

    //A matrix is a two-dimensional array.

    //A matrix is composed of:
    //1. Type: the type of the values stored in the matrix.
    //2. Name: the name of the matrix.
    //3. Rows: the number of rows of the matrix.
    //4. Columns: the number of columns of the matrix.

    int matrix[2][3];

    //We can access the elements of a matrix using the index of the element.
    //We can see a matrix as an array of arrays or a table.
    // [][][]
    // [][][]

    // [1][2][3]
    // [4][5][6]
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;

    //We can use a for loop to iterate over the elements of a matrix.

    cout << "Matrix example" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Row " << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
        }
    }

    //We can use the sizeof operator to get the size of a matrix.

    cout << "The size of the matrix is " << sizeof(matrix) / sizeof(matrix[0]) << endl;

    //We can use the sizeof operator to get the size of a row of a matrix.

    cout << "The size of the row of the matrix is " << sizeof(matrix[0]) / sizeof(matrix[0][0]) << endl;

    //Matrices can be initialized with values.

    int matrix2[2][3] = {{1, 2, 3}, {4, 5, 6}};

    //Size of matrices must be known at compile time and cannot be changed at runtime.

    /*Arrays and functions*/

    //Arrays can be sent to functions as parameters.

    cout << "Arrays and functions example" << endl;

    int array3[5] = {1, 2, 3, 4, 5};

    print_array(array3, 5);

    add_one_to_array(array3, 5);

    print_array(array3, 5);

    /*Matrix and functions*/

    //Matrix can be sent to functions as parameters.

    cout << "Matrix and functions example" << endl;

    int matrix3[2][3] = {{1, 2, 3}, {4, 5, 6}};

    print_matrix(matrix3, 2, 3);

    add_one_to_matrix(matrix3, 2, 3);

    print_matrix(matrix3, 2, 3);




    return 0;
}


