#include<iostream>
#include <iomanip>
using namespace std;

class order {
    protected:
    double itemprice;
    int quantity;
    double discount;
    public:
    order(double price , int qty , double disc): itemprice(price) , quantity(qty), discount(disc) {}

    virtual double calculateTotalCost() const {
        return itemprice*quantity - (itemprice * quantity * discount);
    }
};
class Finalorder : public order {
    public:
    Finalorder(double price , int qty , double disc) : order (price , qty , disc) {}

    double calculateTotalCost() const override {
        return order::calculateTotalCost();
    }
};

class Discountedorder : public Finalorder {
    private:
    double additionaDiscount;
    public:
    Discountedorder(double price, int qty, double disc , double addDisc) :
    Finalorder(price , qty , disc), additionaDiscount(addDisc) {}

    double CalculateFinalCost() const {
        double totalCost = calculateTotalCost();
        return totalCost - (totalCost * additionaDiscount / 100.0);

    }
};



int main() {
    double price , discount, additionalDiscount;
    int quantity;

    cin >> price >> quantity >> discount >> additionalDiscount;
    Discountedorder order(price , quantity ,discount, additionalDiscount);

    double totalCost = order.calculateTotalCost();
    double finalCost = order.CalculateFinalCost();
    cout <<  fixed << setprecision(2);
    cout << "Total Cost: " << totalCost << endl;
    cout << "Final Cost: " <<  finalCost << endl;

    return 0;
}