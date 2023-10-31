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