/*
Problem Statement
Suppose you are working on a project to model a family tree. You need to create classes to represent different family members, including parents and children. You
decide to implement a class hierarchy with a base class called Parent, and three derived classes called Childl, Child2, and Child3. The Parent class will have a default
constructor and a destructor, while each derived class will have a parameterized constructor and a destructor.
Your task is to implement the class hierarchy and observe the order of constructor and destructor execution when creating objects of these classes.
Write a program in C++ that includes the required classes and demonstrates the order of constructor and destructor execution by creating objects of the Childl, Child2,
and Child3 classes. Print appropriate messages to indicate the constructor and destructor calls.
Input format :
The first input is an integer representing the value for Childl constructor.
The second input is a floating-point number b representing the value for Child2 constructor.
The third input is a string c representing the value for Child3 constructor.
Output format :
The program should output messages indicating the order of constructor and destructor calls for each object. Each message should be printed on a separate line.
Input 1 :
10
5.5
ABC
Output 1 :
Parent constructor
Child1 constructor: 10
Parent constructor
Child2 constructor: 5.5
Parent constructor
Child3 constructor: ABC
Child3 destructor
Parent destructor
*/
#include <iostream>
#include <string>

using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent constructor" << endl;
    }
    virtual ~Parent() {
        cout << "Parent destructor" << endl;
    }
};

class Child1 : public Parent {
public:
    Child1(int a) : Parent(), a(a) {
        cout << "Child1 constructor: " << a << endl;
    }
    ~Child1() {
        cout << "Child1 destructor" << endl;
    }
private:
    int a;
};

class Child2 : public Parent {
public:
    Child2(float b) : Parent(), b(b) {
        cout << "Child2 constructor: " << b << endl;
    }
    ~Child2() {
        cout << "Child2 destructor" << endl;
    }
private:
    float b;
};

class Child3 : public Parent {
public:
    Child3(string c) : Parent(), c(c) {
        cout << "Child3 constructor: " << c << endl;
    }
    ~Child3() {
        cout << "Child3 destructor" << endl;
    }
private:
    string c;
};

int main() {
    int a; 
    float b; 
    string c; 

    
    cin >> a;

    
    cin >> b;

    
    cin >> c;

    Child1 child1(a);
    Child2 child2(b);
    Child3 child3(c);

    return 0;
}
