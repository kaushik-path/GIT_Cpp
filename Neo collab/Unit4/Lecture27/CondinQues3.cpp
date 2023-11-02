/*
Problem Statement
Nandhini is tasked with creating a program to calculate and display the speed of a car based on the distance covered and the time taken.
Write a program with two classes: Vehicle as the base class and Car as the derived class, which inherits the properties from the Vehicle class for calculating the speed.
The base class fetches the input as a float value, whereas the derived class calculates and prints the output as a float value.
Note: Use public inheritance
Note: This kind of question will help in clearing Wipro recruitment.
Input format :
The input consists of two floating-point numbers separated by a space. The first number represents the distance traveled by the car, and the second number represents
the time taken to cover that distance, separated by a space.
Output format :
The output displays a single line of output, showing the speed of the car in kilometers per hour.
*/
#include <iostream>
using namespace std;

class Vehicle {
public:
    float distance;
    float time;

    void getInput() {
        cin >> distance >> time;
    }
};

class Car : public Vehicle {
public:
    void calculateSpeed() {
        float speed = distance / time;
        cout << "Speed of car: " << speed << " km/hr" << endl;
    }
};

int main() {
    Car car;
    car.getInput();
    car.calculateSpeed();

    return 0;
}

/*
Input 1 :
15.0 5.0
Output 1 :
Speed of car: 3 km/hr
*/