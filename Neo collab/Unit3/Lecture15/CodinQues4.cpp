/*
Problem Statement
 
Yogesh wants to create a temperature-tracking application. He wants to implement a class called TemperatureTracker that can store and display temperature data. Each temperature reading should have a corresponding date.
 
To accomplish this, Yogesh defines a class named Over with the following attributes:
 
Place (string) - Represents the name of the place temperature tracker.
Day (string) - Represents the date of the temperature reading.
temp (int) - Represents the temperature recorded.
 
Yogesh wants to implement a constructor in the Over class that allows him to create objects with default arguments. He wants the default values to be an empty string for Place and day and 0 for temperature. He also wants to include a member function named displayDetails() that displays the Place name, date, and temperature of the reading.
 
Yogesh starts by defining the Over class and implementing the constructor with default arguments. He then creates three objects of the Over class:
 
obj1 with no arguments, representing the default temperature reading.
obj2 with the Place name and temperature provided by the user and an empty string for the date.
obj with all the details provided by the user.
 
Finally, Yogesh calls the displayDetails() function on each object to display the temperature readings.
 
Note: This is a sample question asked in a Wipro interview.
Input format :
The input consists of the details for three temperature readings:
For obj1: No input is required since it represents the default temperature reading.
For obj2:
The Place name of the temperature tracker (string)
The temperature value is an integer.
For obj:
The Place name of the temperature tracker (string)
The day of the temperature reading (string)
The temperature value is an integer.
Output format :
The output displays the details of each temperature reading object. For each object, the output will include the following information:
The Place name of the temperature tracker
If applicable, the day of the temperature reading
The temperature value is in degrees Celsius.
 
Refer to the sample output for the formatting specifications.
Sample test cases :
Input 1 :
NewYork 25
Paris Monday 24
Output 1 :
Object 1:
 Temperature: 0°
Object 2:
NewYork Temperature: 25°
Object 3:
Paris Monday Temperature: 24°
*/
#include <iostream>
#include <string>
 
using namespace std;
 
class TemperatureTracker {
public:
    TemperatureTracker(string place = "", string day = "", int temp = 0) {
        this->place = place;
        this->day = day;
        this->temp = temp;
	}
    void displayDetails() {
        cout << "Object " << objectCount++ << ":" << endl;
        cout << place;
        if (!day.empty()) {
            cout << " " << day;
        }
        cout << " Temperature: " << temp << "°" << endl;
	}
private:
    string place;
    string day;
    int temp;
    static int objectCount;
};
// Initialize the static variable
int TemperatureTracker::objectCount = 1;
 
int main() {
    TemperatureTracker obj1;
    string place2, day2, place3, day3;
    int temp2, temp3;
 
    cin >> place2 >> temp2;
    cin >> place3 >> day3 >> temp3;
 
    TemperatureTracker obj2(place2, "", temp2);
    TemperatureTracker obj3(place3, day3, temp3);
 
    obj1.displayDetails();
    obj2.displayDetails();
    obj3.displayDetails();
    return 0;
}

