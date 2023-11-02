/*
Problem Statement
Madhu is tasked with developing a program to calculate the total price and discount for a list of discounted items. Each item has the following details:
Create a base class called ItemDetails that has a method called getDetaiIs(). This method contains details about the name, item number, and price.
Create a class Discountedltem that is derived from the class ItemDetails. This class stores the discount percentage and the discounted price of the item.
A customer purchases n items. Write a program to display the item-wise bill and total amount. The program should also display the total price of all items and the total
discount amount.
Note: This kind of question will help in clearing TCS recruitment.
Input format :
The input format consists of the following:
The first line contains an integer n, representing the number of items.
For each item, there are three lines of input:
The first line contains a string name, representing the name of the item.
The second line contains an integer itemNumber, representing the item number.
The third line contains a float price, representing the price of the item.
The fourth line contains a float discountPercent, representing the discount percentage for the item.
Output format :
The output format consists of the following:
The item-wise bill, which includes the details of each item, such as the item name, item number, item price, discount percentage, and discounted price,
After the item-wise bill, there are two lines:
The first line displays the total price of all items, rounded to two decimal places.
The second line displays the total discount amount for all items, rounded to two decimal places.
*/
#include <iostream>
#include <string>
using namespace std;

class ItemDetails {
public:
    string name;
    int itemNumber;
    float price;

    void getDetails() {
        cin >> name;
        cin >> itemNumber;
        cin >> price;
    }
};

class DiscountedItem : public ItemDetails {
public:
    float discountPercent;
    float discountedPrice;

    void calculateDiscountedPrice() {
        discountedPrice = price - (price * discountPercent / 100);
    }

    void displayDetails() {
        cout << "Item name: " << name << endl;
        cout << "Item number: " << itemNumber << endl;
        cout << "Item price: " << price << endl;
        cout << "Discount percent: " << discountPercent << "%" << endl;
        cout << "Discounted price: " << discountedPrice << endl;
    }
};

int main() {
    int n;
    float totalAmount = 0.0;
    float totalDiscount = 0.0;
    cin >> n;
    DiscountedItem items[n];
    for (int i = 0; i < n; i++) {
        items[i].getDetails();
        cin >> items[i].discountPercent;
        items[i].calculateDiscountedPrice();
    }

    cout << "Item-wise bill:" << endl;
    for (int i = 0; i < n; i++) {
        items[i].displayDetails();
        totalAmount += items[i].price;
        totalDiscount += items[i].discountPercent / 100 * items[i].price;
    }

    cout << endl << "Total price: " << totalAmount << endl;
    cout << "Total discount: " << totalDiscount;

    return 0;
}

/*
Input 1 :

2
Pen
012
120
2
Book
023
560
5
Output 1 :

Item-wise bill:
Item name: Pen
Item number: 12
Item price: 120
Discount percent: 2%
Discounted price: 117.6
Item name: Book
Item number: 23
Item price: 560
Discount percent: 5%
Discounted price: 532

Total price: 680
Total discount: 30.4

*/