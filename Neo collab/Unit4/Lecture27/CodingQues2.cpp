/*
Arun is tasked with implementing a program that simulates a mathematical operation on an input number. The program uses a class to represent a Parent class and its
derived child class. The Parent class contains a protected member variable num, and a public member function setNum(int n) to set the value of num. The Child class
inherits from the Parent class and implements the member function fun().
Write a program to implement the following logic using inheritance. Create a class Parent and implement the fun method. In the method, get the individual digits of the
entered number, store them in an array, and find their sum.
For example, in the case of 1234, the individual digits are 4, 3, 2, 1, and the final sum -+ (4+3)+(4+2)+(4+1)+(3+2)+(3+1)+(2+1) = 30.
Create the main class that inherits the parent class and call the fun method inside the parent function.
Note: This kind of question will help in clearing AMCAT recruitment.
Input format :
The input consists of an integer.
Output format :
The output prints the final sum.
*/
#include <iostream>
using namespace std;

class Parent {
protected:
    int num;

public:
    void setNum(int n) {
        num = n;
    }
};

class Child : public Parent {
public:
    int sumOfDigitPairs() {
        int sum = 0;
        int n = num;

        while (n > 0) {
            int lastDigit = n % 10;
            n /= 10;

            int tempN = n;  // Create a temporary copy of the original number
            while (tempN > 0) {
                int tempLastDigit = tempN % 10;
                sum += lastDigit + tempLastDigit;
                tempN /= 10;
            }
        }

        return sum;
    }
};

int main() {
    int input;
    cin >> input;

    Child child;
    child.setNum(input);
    int result = child.sumOfDigitPairs();

    cout << result << endl;

    return 0;
}


/*
Input 1 :
1234
Output 1 :
30
*/