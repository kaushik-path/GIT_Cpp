/*
Problem Statement
 
Darshu wants to write a program to calculate the sum of money (in rupees and paisas) from two different sources. Each source provides the amount of money in terms of rupees and paisas. Darshu wants to calculate the total sum and display it in rupees and paisas.
 
Define a class named "Money" with the attributes: rupee (integer) & paisa (integer)
 
Implement a constructor for the Money class that initializes the attributes with default values:
Money (int r = 0, int p = 0): Initializes the money amount with the provided rupees (r) and paisas (p). If no values are provided, the default value of 0 will be used.
 
Define a Member Function: The setRupee() and setPaisa() member functions of each Money object are called to set the values of rupee and paisa, respectively. The getRupee() and getPaisa() member functions are called to retrieve the values. If the sum of paisas exceeds 99, increment the rupee value by 1 and adjust the paisa value accordingly.
 
Note: This is a sample question asked in an Infosys interview.
Input format :
The input consists of two amounts: rupee and paisa are separated by a space for each amount.
Output format :
The output prints the total sum of the given input amounts rounded off to two decimal places.
Code constraints :
0 <= rupee <= 105
0 <= paisa <= 99
Sample test cases :
Input 1 :
50 85
42 65
Output 1 :
93.50
Input 2 :
254 45
845 20
Output 2 :
1099.65
*/
#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Money {
private:
    int rupee;
    int paisa;
 
public:
    Money(int r = 0, int p = 0)
        : rupee(r), paisa(p) {}
 
    void setRupee(int r) {
        rupee = r;
	}
 
    void setPaisa(int p) {
        paisa = p;
        if (paisa >= 100) {
            rupee += paisa / 100;
            paisa %= 100;
        }
	}
 
    int getRupee() const {
        return rupee;
	}
 
    int getPaisa() const {
        return paisa;
	}
 
    double getTotal() const {
        return static_cast<double>(rupee) + static_cast<double>(paisa) / 100.0;
	}
};
 
int main() {
    Money source1, source2;
    int rupee, paisa;
 
    cin >> rupee >> paisa;
    source1.setRupee(rupee);
    source1.setPaisa(paisa);
 
    cin >> rupee >> paisa;
    source2.setRupee(rupee);
	source2.setPaisa(paisa);
 
    Money total;
    total.setRupee(source1.getRupee() + source2.getRupee());
    total.setPaisa(source1.getPaisa() + source2.getPaisa());
 
    cout << fixed << setprecision(2) << total.getTotal() << endl;
 
    return 0;
}
