/*
Problem Statement
 
Hema wants to manage a list of professors at her university. She needs a program that takes input for the number of professors (N) and their details, including their ID, name, and salary. Hema wants to display the details of professors whose salaries are greater than or equal to 20,000.
 
Write a program to implement this functionality using a class named "Professor" with appropriate member variables and display() member functions and add a constructor with default arguments to the "Professor" class.
 
Note: This is a sample question asked in a Deloitte interview.
Input format :
The first line consists of the total number of professors (N).
The next N lines consist of eEmployee ID, name, and salary, separated by a space in each line.
Output format :
The output prints the details of the professors whose salaries are greater than or equal to 20000.
 
Refer to the sample output for the formatting specifications.
Code constraints :
1 <= N <= 100
ID > 0
salary > 0
Sample test cases :
Input 1 :
3
1001 Akil 25000
1002 Elon 30000
1003 Musk 12000
Output 1 :
1001 Akil 25000
1002 Elon 30000
Input 2 :
2
100123 Jibran 100000
100124 Rahman 200000
Output 2 :
100123 Jibran 100000
100124 Rahman 200000
*/
#include <iostream>
#include <string>
 
using namespace std;
 
class Professor {
private:
    int ID;
    string name;
    int salary;
 
public:
    Professor(int id = 0, const string& n = "", int s = 0)
        : ID(id), name(n), salary(s) {}
 
    void display() {
        cout << ID << " " << name << " " << salary << endl;
	}
 
    bool isSalaryAbove20000() {
        return salary >= 20000;
	}
};
 
int main() {
    int N;
    cin >> N;
 
    Professor professors[N];
 
    for (int i = 0; i < N; ++i) {
        int ID, salary;
        string name;
        cin >> ID >> name >> salary;
        professors[i] = Professor(ID, name, salary);
	}
 
    for (int i = 0; i < N; ++i) {
        if (professors[i].isSalaryAbove20000()) {
            professors[i].display();
        }
	}
 
    return 0;
}
