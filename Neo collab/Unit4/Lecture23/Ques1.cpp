/*
Problem Statement
You are developing a program to analyze electrical circuits. You need to calculate the impedance of two components in a circuit. The impedance is represented by
complex numbers. Implement the Arithmetic class to perform addition and subtraction operations on the impedance values.
Create a class Arithmetic for operator overloading to perform addition and subtraction. Create a binary operator overloading functions to perform arithmetic
operations on the given set of complex numbers.
Note: This is a sample question asked in a TCS question.
Input format :
The first line consists of space-separated float values representing the real and imaginary parts of the first complex number.
The second line consists of space-separated float values representing the real and imaginary parts of the second complex number.
Output format :
The first line of output displays the addition of the complex numbers.
The second line of output display the subtraction of the complex numbers.
*/
#include <iostream>
#include <iomanip>

using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;

public:
    ComplexNumber(float r, float i) : real(r), imaginary(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    friend ostream& operator<<(ostream& out, const ComplexNumber& num) {
        if (num.imaginary >= 0) {
            out << num.real << " + " << num.imaginary << "i";
        } else {
            out << num.real << " - " << -num.imaginary << "i";
        }
        return out;
    }
};

int main() {
    float real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1 >> real2 >> imaginary2;

    ComplexNumber num1(real1, imaginary1);
    ComplexNumber num2(real2, imaginary2);

    
    ComplexNumber addition = num1 + num2;
    ComplexNumber subtraction = num1 - num2;

    
    cout << addition << endl;
    cout << subtraction << endl;

    return 0;
}
/*
>>in
4.5
7.8
1.2
3.1
>>out
5.7 + 10.9i
3.3 + 4.7i
*/

