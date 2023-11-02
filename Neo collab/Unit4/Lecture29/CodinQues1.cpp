/*
Problem Statement
Write a program to calculate the total electricity bill based on the usage of various electrical appliances. The program should prompt the user to enter the power
consumption (in watts) and the number of hours each appliance was used. The program should then calculate the total amount of electricity consumed and display the
corresponding bill.
The program should include the following classes:
a) currentBiIl class: serves as the base class for all electrical appliances. It contains a pure virtual function amount() that calculates and returns the electricity bill based
on the appliance's power consumption and usage hours.
b) Fan class: represents a fan appliance. It inherits from the currentBill class and implements the amount() function to calculate the electricity bill for the fan.
c) Light class: represents a light appliance. It inherits from the currentBill class and implements the amount() function to calculate the electricity bill for the light.
d) TV class: represents a television appliance. It inherits from the currentBill class and implements the amount() function to calculate the electricity bill for the TV.
The main function of the program should create instances of the Fan, Light, and TV classes, prompt the user to enter the power consumption and usage hours for each
appliance, calculate the total electricity bill, and display it on the screen.
Input format :
The first line consists of the power rating of the fan and the total hours used separated by space.
The second line consists of the power rating of Light and the total hours used separated by space.
The third line consists of the power rating of the TV and the total hours used separated by space.
Output format :
The output prints the bill amount rounding off to two decimal places.
*/
#include<iostream>
#include<iomanip>

class currentBill {
public:
    virtual double amount(int power, int hours) = 0;
};

class Fan : public currentBill {
public:
    double amount(int power, int hours) override { 
        return 1.5 * (power * hours)/1000.0;
    }
};

class Light : public currentBill {
public:
    double amount(int power, int hours) override {
        return 1.5 * (power * hours)/1000.0;
    }
};

class TV : public currentBill {
public:
    double amount(int power, int hours) override { 
        return 1.5 * (power * hours)/1000.0;
    }
};

int main() {
    Fan f;
    Light l;
    TV t;
    int power, hours;
    
    std::cin >> power >> hours;
    double fanBill = f.amount(power, hours);
    
    std::cin >> power >> hours;
    double lightBill = l.amount(power, hours);
    
    std::cin >> power >> hours;
    double tvBill = t.amount(power, hours);
    
    double totalBill = fanBill + lightBill + tvBill;
    
    std::cout << std::fixed << std::setprecision(2) << totalBill << std::endl;

    return 0;
}
/*
Input 1 :
40 123
55 200
33 400
Output 1 :
43.68
*/