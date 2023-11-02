/*
Problem Statement
You are tasked with developing a program to manage the records of students and teachers in a school. The program should allow the user to input student and teacher
details, calculate the average age of students and teachers, and display the results.
Each class, including the base class Person, has its own constructor and destructor. The constructors are executed in the order of inheritance hierarchy, starting from the
base class and proceeding to the derived classes. The destructors are executed in reverse order, starting from the derived classes and ending with the base class.
Input format :
The input consists of the student and teacher details.
For each student, the following information needs to be provided:
Student name: a string without spaces
Student age: an integer value
The program should terminate the input process when the user enters 'q' for the name.
For each teacher, the following information needs to be provided:
Teacher name: a string without spaces
Teacher age: an integer value
The program should terminate the input process when the user enters 'q' for the name.
Output format :
The output displays the average age of students and teachers.
The average age should be displayed as a floating-point number with two decimal places.
*/
/*
Input 1 :
Alex
14
Cade
15
q
Christopher
39
John
35
q

Output 1 :
Base class Person constructor called: Alex
Derived class Student constructor called: Alex
Derived class Student destructor called: Alex
Base class Person destructor called: Alex
Base class Person constructor called: Cade
Derived class Student constructor called: Cade
Derived class Student destructor called: Cade
Base class Person destructor called: Cade
Base class Person constructor called: Christopher
Derived class Teacher constructor called: Christopher
Derived class Teacher destructor called: Christopher
Base class Person destructor called: Christopher
Base class Person constructor called: John
Derived class Teacher constructor called: John
Derived class Teacher destructor called: John
Base class Person destructor called: John
Average Student Age: 14.5
Average Teacher Age: 37
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string name, int age) : name(name), age(age) {
        cout << "Base class Person constructor called: " << name << endl;
    }
    virtual ~Person() {
        cout << "Base class Person destructor called: " << name << endl;
    }
};

class Student : public Person {
public:
    Student(string name, int age) : Person(name, age) {
        cout << "Derived class Student constructor called: " << name << endl;
    }
    ~Student() {
        cout << "Derived class Student destructor called: " << name << endl;
    }
};

class Teacher : public Person {
public:
    Teacher(string name, int age) : Person(name, age) {
        cout << "Derived class Teacher constructor called: " << name << endl;
    }
    ~Teacher() {
        cout << "Derived class Teacher destructor called: " << name << endl;
    }
};

string format(double value) {
    ostringstream out;
    out << fixed << setprecision(2) << value;
    string str = out.str();
    while (str.back() == '0') str.pop_back(); // Remove trailing zeros
    if (str.back() == '.') str.pop_back(); // Remove trailing decimal point
    return str;
}

int main() {
    vector<int> studentAges;
    vector<int> teacherAges;

    string name;
    int age;

    // Input student details
    while (true) {
        // cout << "Enter student's name (or 'q' to quit): ";
        cin >> name;
        if (name == "q") break;
        // cout << "Enter student's age: ";
        cin >> age;

        { // start new scope
            Student s(name, age);
            studentAges.push_back(age);
        } // end scope, destructor for s is called
    }

    // Input teacher details
    while (true) {
        // cout << "Enter teacher's name (or 'q' to quit): ";
        cin >> name;
        if (name == "q") break;
        // cout << "Enter teacher's age: ";
        cin >> age;

        { // start new scope
            Teacher t(name, age);
            teacherAges.push_back(age);
        } // end scope, destructor for t is called
    }

    // Calculate average ages
    double avgStudentAge = 0.0, avgTeacherAge = 0.0;

    for (auto a : studentAges) avgStudentAge += a;
    for (auto a : teacherAges) avgTeacherAge += a;

    avgStudentAge /= studentAges.size();
    avgTeacherAge /= teacherAges.size();

    // Output average ages
    cout << "Average Student Age: " << format(avgStudentAge) << "\n";
    cout << "Average Teacher Age: " << format(avgTeacherAge) << "\n";

    return 0;
}
