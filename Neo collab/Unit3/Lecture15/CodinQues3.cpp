/*
Problem Statement
 
Lila wants to write a program that allows the user to manage a variable number of objects of class Z. The number of objects they want to create. After receiving the input, the program should create an array of objects of class Z with a size based on the user's input. Each object should be constructed using the default constructor of class Z. Once the objects are created, they deallocate the memory occupied by them using the destructor of class Z.
 
Then the display the message "Constructor called" for each object created and "Destructor called" for each object destroyed.
 
Note: This is a sample question asked in a HCL interview.
Input format :
The input consists of an integer representing the number of objects you want to create.
Output format :
The output format is as follows:
The output displays the message "Constructor called" each time an object of class Z is created.
The output displays the message "Destructor called" each time an object of class Z is destroyed.
 
Refer to the sample output for the formatting specifications.
Code constraints :
1 <= n <= 100
Sample test cases :
Input 1 :
3
Output 1 :
Constructor called
Constructor called
Constructor called
Destructor called
Destructor called
Destructor called
*/
#include <iostream>
using namespace std;
class Z {
public:
    Z() {
        cout << "Constructor called" << endl;
	}
    ~Z() {
        cout << "Destructor called" << endl;
	}
};
 
int main() {
    int n;
    cin >> n;
	Z *objects = new Z[n];
    delete[] objects;
    return 0;
}
