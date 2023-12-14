/*
Problem Statement
 
Fathima wants to create a program to manage student details. She needs to define a student class that stores the roll number, name, and fee of a student. The program should allow the user to enter the student's details and display them. It should also demonstrate the use of a copy constructor to create a copy of a student object.
 
Note: This is a sample question asked in a Deloitte interview.
Input format :
The input consists of the roll number as an integer, the name as a string, and the fee (as a double) of the student. a separate line.
Output format :
The output format is as follows:
After entering the student details, the output displays "Student Details:" on a new line.
The student's roll number, name, and fee are then displayed on the same line, separated by spaces.
After that, the program displays "Copied Student Details:" on a new line.
The copied student details are then displayed on the same line, separated by spaces, in the same format as above.
 
Refer to the sample output for the formatting specifications.
Code constraints :
fee > 0
roll number > 0
Sample test cases :
Input 1 :
101
John
30500.00
Output 1 :
Student Details:
101 John 30500
Copied Student Details:
101 John 30500
*/
#include <iostream>
#include <string>
 
using namespace std;
 
class student {
private:
    int rollNumber;
    string name;
    double fee;
 
public:
    student(int roll, string n, double f);
    student(const student& other);
    void display(bool includeLabel = true);
};
 
student::student(int roll, string n, double f)
	: rollNumber(roll), name(n), fee(f) {}
 
student::student(const student& other)
	: rollNumber(other.rollNumber), name(other.name), fee(other.fee) {}
 
void student::display(bool includeLabel) {
    if (includeLabel) {
        cout << "Student Details:" << endl;
	}
    cout << rollNumber << " " << name << " " << fee << endl;
}
 
int main() {
    int rollNumber;
    string name;
    double fee;
 
    cin >> rollNumber;
    cin.ignore();
    getline(cin, name);
    cin >> fee;
 
    student s(rollNumber, name, fee);
 
    s.display();
 
    student copiedStudent(s);
 
    cout << "Copied Student Details:" << endl;
    copiedStudent.display(false);  // Do not include the label
 
    return 0;
}
