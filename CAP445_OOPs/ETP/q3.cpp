// Create a base class Shape with a pure virtual function area() and a derived class Circle that
// calculates the area of a circle. Create another derived class Rectangle that calculates the area
// of a rectangle.

#include <iostream>
using namespace std; 

// Base class Shape
class Shape {
public:
    // Pure virtual function for calculating the area
    virtual double area() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor for Circle
    Circle(double r) {
        radius = r;
    }

    // Implementation of the area function for Circle
    double area() {
        return 3.14159 * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor for Rectangle
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the area function for Rectangle
    double area() {
        return length * width;
    }
};

int main() {
    // Example usage
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Display areas
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    return 0;
}
