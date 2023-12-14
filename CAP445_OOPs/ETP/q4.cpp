// Create a C++ class Rectangle with private data members' length and width. Implement a
// parameterized constructor to initialize these members. Create a member function to calculate the area of the rectangle.

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
        }

    // Member function to calculate the area
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    // Example usage
    double length, width;

    // Get user input for length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create an instance of the Rectangle class
    Rectangle myRectangle(length, width);

    // Calculate and display the area
    double area = myRectangle.calculateArea();
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
