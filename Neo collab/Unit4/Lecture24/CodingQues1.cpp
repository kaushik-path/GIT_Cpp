/*
Problem Statement
You are tasked with creating a Matrix class that can store and manipulate a matrix of integers. The Matrix class should support setting and getting individual elements as
well as calculating the sum of all elements in the matrix.
To achieve this, you need to implement the Matrix class, which internally uses a static 2D array to store the matrix data. The maximum size of the matrix is defined as
and the class provides methods to set and get elements at specific positions. Additionally, the Matrix class overloads the conversion operator to allow implicit
conversion to an integer, a basic type (int) is converted to a class type (Matrix) Matrix matrix(numRows, numcols), which represents the sum of all elements in the
matrix.
Note: This kind of question will help in clearing TCS recruitment.
Input format :
The first line of input contains an integer, which represents the number of rows and columns in the matrix, separated by a space.
The next line of input contains the values, row by row.
Each row should contain the specified number of values, separated by a space.
Output format :
The output displays the sum of all values in the matrix (an integer).
Code constraints :
The number of rows and columns entered by the user should be non-negative integers.
The values of the matrix and the pixel values should be within the limits of the int data type.
The values of the matrix can be O, in which case the sum will be O.
The maximum size of the matrix is defined as (static const int MAX_SIZE = 100).
The input values for numRows and numCols should be within the range [O, MAX_SIZE] and 1 <
= row,columns <= 1O
*/
#include <iostream>
using namespace std;

class Matrix {
private:
    static const int MAX_SIZE = 100;
    int matrix[MAX_SIZE][MAX_SIZE];
    int numRows;
    int numCols;

public:
    Matrix(int rows, int cols) : numRows(rows), numCols(cols) {
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                matrix[i][j] = 0;
            }
        }
    }

    void setElement(int row, int col, int value) {
        matrix[row][col] = value;
    }

    int getElement(int row, int col) const {
        return matrix[row][col];
    }

    int getNumRows() const {
        return numRows;
    }

    int getNumCols() const {
        return numCols;
    }

    int calculateSum() const {
        int sum = 0;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                sum += matrix[i][j];
            }
        }
        return sum;
    }

    operator int() const {
        return calculateSum();
    }
};

int main() {
    int numRows, numCols;
    cin >> numRows >> numCols;

    Matrix matrix(numRows, numCols);


    // Input matrix elements
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            int value;
            cin >> value;
            matrix.setElement(i, j, value);
        }
    }

    // Output sum of matrix elements
    cout << static_cast<int>(matrix) << endl;

    return 0;
}
/*
in>>
2 
3
1
2
3
4 
5
6
out>>
21
*/