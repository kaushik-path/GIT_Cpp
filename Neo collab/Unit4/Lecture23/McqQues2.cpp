#include <iostream> // Corrected the inclusion of iostream

class Fraction {
public:
    int numerator;
    int denominator;

    Fraction(int n, int d) : numerator(n), denominator(d) {} // Corrected constructor syntax

    Fraction operator+(const Fraction& other) const {
        int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }
};

int main() {
    Fraction f1(1, 2); // Corrected variable name from 'fl' to 'f1'
    Fraction f2(2, 3);
    Fraction result = f1 + f2;
    std::cout << "Result: " << result.numerator << "/" << result.denominator;
    return 0; // Corrected 'return e;' to 'return 0;'
}
// answer/output: 7/6