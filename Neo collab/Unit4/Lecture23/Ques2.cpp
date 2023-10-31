/*
Problem Statement
Help Aashiq solve the following problem: Create a program that performs string operations using a custom class called MyString.
The program should read two strings and a number from the user, and then perform concatenation and repetition operations on those strings using overloaded
operators. Finally, it should display the results.
Note: This question helps in clearing HCL tests.
Input format :
The input consists of two strings: strl and str2 in separate lines.
The last line of the input consists of the number of repetitions, n.
Output format :
The output prints the following in each line:
a) The concatenated string of first and second.
b) The first string that is repeated n times.
c) The second string that is repeated n times.
*/
#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(const string& s) : str(s) {}

    MyString operator+(const MyString& other) const {
        return MyString(str + other.str);
    }

    MyString operator*(int n) const {
        string result;
        for (int i = 0; i < n; i++) {
            result += str;
        }
        return MyString(result);
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    string str1, str2;
    int n;

    // Input
    cin >> str1 >> str2 >> n;

    // Create MyString objects
    MyString myStr1(str1);
    MyString myStr2(str2);

    // Perform operations and display results
    (myStr1 + myStr2).display();          // Concatenation
    (myStr1 * n).display();               // First string repeated n times
    (myStr2 * n).display();               // Second string repeated n times

    return 0;
}
