// 08 Create a C++ class Complex to represent complex numbers. Overload the + operator to add
// two complex numbers.
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloaded + operator to add two complex numbers
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Display the complex number
    void display() const {
        std::cout << real << " + " << imag << "i";
    }
};

int main() {
    // Create two complex numbers
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);

    // Add two complex numbers using the overloaded + operator
    Complex result = c1 + c2;

    // Display the result
    std::cout << "Result: ";
    result.display();
    std::cout << std::endl;

    return 0;
}
