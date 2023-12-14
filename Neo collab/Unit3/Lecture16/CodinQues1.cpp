/*
Problem Statement
 
Koutheesh is a software developer working on a project that involves handling and displaying data. He is designing a class called "Demo" to represent data objects. The class has two private integer variables: num1 and num2, a constructor, a display function, and a destructor.
 
Note: This is a sample question asked in an Amcat interview.
Input format :
The input consists of the numbers to be assigned to n1 and n2, respectively, separated by a space.
Output format :
The first line of output displays the message "Inside Constructor".
The next two lines of output display the entered numbers on separate lines.
The last line of output indicates the message "Inside Destructor".
 
Refer to the sample output for the formatting specifications.
Code constraints :
n1, n2 > 0
Sample test cases :
Input 1 :
4 5
Output 1 :
Inside Constructor
4
5
Inside Destructor

*/
#include <iostream>
using namespace std;
class Demo {
private:
    int num1;
    int num2;
 
public:
    Demo(int n1, int n2) : num1(n1), num2(n2) {
        cout << "Inside Constructor" << std::endl;
	}
    void display() {
        cout << num1 << std::endl;
        cout << num2 << std::endl;
	}
    ~Demo() {
        std::cout << "Inside Destructor" << std::endl;
	}
};
 
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Demo obj(n1, n2);
    obj.display();
    return 0;
}
