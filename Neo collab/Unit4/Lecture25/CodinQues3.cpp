/*
Problem Statement
You are tasked with developing a program to process and display full names. The program should accept user input for the first name and last name, create a FullName
class using the provided names, and convert the FullName class to a basic-type string FullName fullName(firstName, lastName). Finally, the converted full name
should be displayed on the console.
Note: The program can handle multiple-word names correctly.
Note: This kind of question will help in clearing Capgemini recruitment.
Input format :
The first line of input consists of the first name (a string).
The second line of input consists of the last name (a string).
Output format :
The output is a single line displaying the user's full name in the format "First Name Last Name".
*/
#include <iostream>
#include <string>
using namespace std;

class FullName {
private:
    string firstName;
    string lastName;

public:
    FullName(const string& first, const string& last) : firstName(first), lastName(last) {}

    operator string() const {
        return firstName + " " + lastName;
    }
};

int main() {
    string firstName, lastName;
    
    getline(cin, firstName);
    getline(cin, lastName);

    FullName fullName(firstName, lastName);
    string fullStr = fullName;

    cout << fullStr << endl;

    return 0;
}
/*
Input 1 :
John
"Doe"
Output 1 :
John "Doe"
*/