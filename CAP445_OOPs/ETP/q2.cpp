// Wnte a C++ program to divide two numbers. but handle exceptions for division by zero.
#include <iostream>
using namespace std;

int divideNumbers(int num, int deno) {
    if (deno == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return num/ deno;
}

int main() {
    try {
        // Get user input for numerator and denominator
        int num, deno;
        cout << "Enter numerator: ";
        cin >> num;

        cout << "Enter denominator: ";
        cin >> deno;

        // Perform division and display the resul
        int result = divideNumbers(num, deno);
        cout << "Result: " << result << endl;

    } catch (const invalid_argument& e) {
        // Handle the exception for division by zero
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
