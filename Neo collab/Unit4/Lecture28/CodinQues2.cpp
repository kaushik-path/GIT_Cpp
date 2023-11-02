/*
Problem Statement:
Maran is tasked with implementing a program to model bicycles and mountain bikes. The program should have two classes:
Write a program by creating a class called Bicycle as a base class with the number of gears and speed of the bicycle as integer attributes and creating a class called
MountainBike, a derived class that extends the Bicycle class with an attribute called seatHeight as an integer.
In the main method, obtain the inputs and display them.
Note: This kind of question will help in clearing Wipro recruitment.
Input format :
The input gets three integers from the user (Number of gears, Speed of bicycle, and Seat height).
Output format :
The first line of output displays the number of gears and the speed of the bicycle, separated by a space.
The second line of input displays the seatHeight.
*/
#include <iostream>
using namespace std;

class Bicycle {
protected:
    int numGears;
    int speed;

public:
    Bicycle(int gears, int spd) : numGears(gears), speed(spd) {}

    void displayInfo() {
        cout << numGears << " " << speed << endl;
    }
};

class MountainBike : public Bicycle {
private:
    int seatHeight;

public:
    MountainBike(int gears, int spd, int height) : Bicycle(gears, spd), seatHeight(height) {}

    void displaySeatHeight() {
        cout << seatHeight << endl;
    }
};

int main() {
    int gears, speed, seatHeight;
    cin >> gears >> speed >> seatHeight;

    MountainBike mountainBike(gears, speed, seatHeight);

    mountainBike.displayInfo();
    mountainBike.displaySeatHeight();

    return 0;
}
/*
Input 1 :
2 90 40
Output 1 :
2 90
40
*/