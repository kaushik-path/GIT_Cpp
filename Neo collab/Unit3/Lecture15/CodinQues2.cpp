/*
Problem Statement
 
Tisha wants to write a program that welcomes a person and says hello to them. The user must enter the name of the person. It should then create objects of the classes Welcome and Hello, which have default constructors to print "Welcome" and "Hello" respectively. Finally, the program should display the person's name after each greeting.
 
Note: This is a sample question asked in a Deloitte interview.
Input format :
The input consists of the name as a string.
Output format :
The output displays the messages "Welcome " and "Hello " followed by the person's name entered by the user and separated by a newline.
 
Refer to the sample output for the formatting specifications.
Sample test cases :
Input 1 :
John
Output 1 :
Welcome John
Hello John
*/
#include <iostream>
#include <string>
using namespace std;
 
class Welcome {
public:
    Welcome() {
        cout << "Welcome ";
	}
};
class Hello {
public:
    Hello() {
        cout << "Hello ";
	}
};
 
int main() {
    string name;
    cin >> name;
    Welcome welcome;
    cout << name << endl;
    Hello hello;
    cout << name << endl;
    return 0;
}
