/*
Problem Statement
You are given the coordinates of a three-dimensional vector. Your task is to calculate the magnitude (length) of the vector and display it.
Write a program that takes three float values as input, representing the x, y, and z coordinates of a vector. The program should create a Vector class using the given
coordinates. The Vector class should have a member function magnitude() that calculates the magnitude of the vector using the Euclidean formula. Finally, the
program should convert the Vector object to a float value (magnitude) and display it with two decimal places. Ensure that the program performs class type to basic
type (float magnitude = vector) conversions to handle the input values correctly.
The program should then calculate and display the magnitude of the vector by performing the necessary type conversions and calculations.
Input format :
The input contains the x, y, and z components of the vector as floating-point values, separated by spaces.
Output format :
The output displays the magnitude of the vector, rounded off to two decimal places.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Vector {
private:
    float x, y, z;

public:
    Vector(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

    float magnitude() const {
        return sqrt(x * x + y * y + z * z);
    }

    operator float() const {
        return magnitude();
    }
};

int main() {
    float x, y, z;
    cin >> x >> y >> z;

    Vector vector(x, y, z);
    float magnitude = vector;

    cout << fixed << setprecision(2);
    cout << magnitude << endl;

    return 0;
}
/*
Input 1 :
3.5 -2.8 6.2
Output 1 :
7.65
*/