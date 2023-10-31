/*
Single File Programming Question
 >>problem Statement
You are given a square matrix of size m x m. Each element in the matrix represents the population count of
a particular area. You need to implement a class PopulationMatrix that can perform operations on the
matrix.
Overload the unary operators ++ and -- to increment and decrement each element of the matrix by l,
respectively. Write a program that showcases the usage of these unary operators.
 >> Input format :
The first line of input consists of an integer m representing the size of the matrix.
The next m lines contain m integers each, representing the elements of the matrix.
 >>Output format :
The output displays the input matrix after incrementing each element by 1.
The output displays the input matrix after decrementing each element by 1.
*/
#include <iostream>
#include <vector>
using namespace std;

class PopulationMatrix {
private:
    int size;
    vector<vector<int>> matrix;

public:
    PopulationMatrix(int m) : size(m) {
        matrix.resize(size, vector<int>(size));
    }

    void readMatrix() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    PopulationMatrix operator++() {
        PopulationMatrix result(size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result.matrix[i][j] = matrix[i][j] + 1;
            }
        }
        return result;
    }

    PopulationMatrix operator--() {
        PopulationMatrix result(size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result.matrix[i][j] = matrix[i][j] - 1;
            }
        }
        return result;
    }

    void displayMatrix() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int m;
    cin >> m;

    PopulationMatrix matrix(m);
    matrix.readMatrix();

    cout << "Matrix after incrementing each element by 1:" << endl;
    PopulationMatrix incrementedMatrix = ++matrix;
    incrementedMatrix.displayMatrix();

    cout << "Matrix after decrementing each element by 1:" << endl;
    PopulationMatrix decrementedMatrix = --matrix;
    decrementedMatrix.displayMatrix();

    return 0;
}
