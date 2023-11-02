/*
Problem Statement
You are developing a program to calculate the cost of different types of items. Write a program that does the following:
a) Create a base class, ItemType, with one virtual function double calculateAmount()
b) Create a class called wooden that extends ItemType class with a number of items and cost as its private attributes. Obtain the data members and override the virtual
function.
c) Create a class called electronics that extends ItemType class with cost as its private attribute. Obtain the data member and override the virtual function.
In the main method, obtain a choice.
a) If the choice is l, create an object for the wooden class.
b) If the choice is 2, create an object for the electronics class.
c) Call the calculateAmount() method to calculate the total cost for the chosen item type.
Note: This question helps in clearing Infosys tests.
Input format :
The first line consists of an integer choice (1 or 2) representing the choice of item type.
If the choice is I (wooden items), the next line consists of two space-separated integers: noOfltems and cost, representing the number of wooden items and their
individual cost, respectively.
If the choice is 2 (electronics), the next line consists of a single floating-point number cost, representing the cost of the electronic item.
Output format :
The output prints a floating-point number representing the calculated total cost of the chosen item type rounded off to two decimal places.
Code constraints :
IO < cost < 106
0 < noOfltems < 20
*/

#include <iostream>
#include <iomanip>

using namespace std;

class ItemType {
public:
    virtual double calculateAmount() {
        return 0.0;
    }
};

class Wooden : public ItemType {
private:
    int noOfItems;
    double cost;

public:
    Wooden(int noOfItems, double cost) : noOfItems(noOfItems), cost(cost) {}

    double calculateAmount() override {
        return noOfItems * cost;
    }
};

class Electronics : public ItemType {
private:
    double cost;

public:
    Electronics(double cost) : cost(cost) {}

    double calculateAmount() override {
        return 0.8 * cost;  // Discount for electronics
    }
};

int main() {
    int choice;
    cin >> choice;

    ItemType* item = nullptr;

    if (choice == 1) {
        int noOfItems;
        double cost;
        cin >> noOfItems >> cost;
        item = new Wooden(noOfItems, cost);
    } else if (choice == 2) {
        double cost;
        cin >> cost;
        item = new Electronics(cost);
    }

    if (item != nullptr) {
        double totalCost = item->calculateAmount();
        cout << fixed << setprecision(2) << totalCost << endl;
        delete item;
    }

    return 0;
}


/*
Input 1 :
1
5 840.5
Output 1 :
4202.50
*/