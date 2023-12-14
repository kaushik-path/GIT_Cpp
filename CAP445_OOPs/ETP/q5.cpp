// Create a base class Vehicle with properties like make. model, and year. Derive two classes
// Car and Truck from Vehicle. Implement methods to display vehicle information for both car and trucks.

#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    string Make;
    string Model;
    int Year;

public:
    // Parameterized constructor for Vehicle
    Vehicle(string make,  string model, int year)
    {
        Make = make;
        Model = model;
        Year = year;
    }

    // Virtual function to display vehicle information
    virtual void displayInfo()=0 {
        cout << "Make: " << Make << "\nModel: " << Model << "\nYear: " << Year << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    int numDoors;

public:
    // Parameterized constructor for Car
    Car (string make,  string model, int year, int doors){
        numDoors = doors;
        Make = make;
        Model = model;
        Year = year;
    }
        

    // Override displayInfo for Car
    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
};

// Derived class Truck
class Truck : public Vehicle {
private:
    double payloadCapacity;

public:
    // Parameterized constructor for Truck
    Truck(const string& make, const string& model, int year, double capacity)
        : Vehicle(make, model, year), payloadCapacity(capacity) {}

    // Override displayInfo for Truck
    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Payload Capacity: " << payloadCapacity << " tons" << std::endl;
    }
};

int main() {
    // Example usage
    Car myCar("Toyota", "Camry", 2022, 4);
    Truck myTruck("Ford", "F-150", 2022, 2.5);

    // Display information for car and truck
    cout << "Car Information:\n";
    myCar.displayInfo();
    cout << "\nTruck Information:\n";
    myTruck.displayInfo();

    return 0;
}
