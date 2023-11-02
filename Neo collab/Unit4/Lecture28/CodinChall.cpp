/*
Problem Statement
You are tasked with developing a program that calculates the total and average marks for a class of students. The program takes the input for the number of students in
the class, followed by their respective names and marks in three subjects: Physics, Chemistry, and Mathematics. The program then calculates the total marks and
average marks for each student, as well as the total marks and average marks for the entire class.
Create a class named Marks with data members for roll number, name, and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry,
and Mathematics, which are used to define marks in the individual subjects of each student. The roll number for each student will be generated automatically.
Note: This kind of question will help in clearing Infosys recruitment.
Input format :
The first line of input contains an integer, 'n', representing the number of students in the class.
The next 'n' lines contain the name of each student followed by three integers separated by a line, representing their marks in Physics, Chemistry, and Mathematics,
respectively.
Output format :
For each student, display their roll number, name, and total marks (after using the 2 new line).
After displaying the marks for all students, display the total marks of the entire class and the average marks of the class, each on a new line.
*/
#include<iostream>
#include <string>
using namespace std;

class Physics;
class Chemistry;
class Mathematics;

class Marks {
protected:
    int rollno;
    string name;
    int marks[3];

public:
    Marks() {}

    Marks(int roll, string n) {
        rollno = roll;
        name = n;
    }

    void display() {
        cout << "Roll Number: " << rollno << " \n";
        cout << "Name: " << name << " \n";
    }

    friend int getTotalMarks(Marks&, Physics&, Chemistry&, Mathematics&);
};

class Physics : public Marks {
private:
    int mark;

public:
    Physics() {}

    Physics(int mark) {
        this->mark = mark;
    }

    friend int getPhysicsMarks(Physics&);
};

class Chemistry : public Marks {
private:
    int mark;

public:
    Chemistry() {}

    Chemistry(int mark) {
        this->mark = mark;
    }

    friend int getChemistryMarks(Chemistry&);
};

class Mathematics : public Marks {
private:
    int mark;

public:
    Mathematics() {}

    Mathematics(int mark) {
        this->mark = mark;
    }

    friend int getMathematicsMarks(Mathematics&);
};

int getPhysicsMarks(Physics& p) {
    return p.mark;
}

int getChemistryMarks(Chemistry& c) {
    return c.mark;
}

int getMathematicsMarks(Mathematics& m) {
    return m.mark;
}

int getTotalMarks(Marks& ma, Physics& p, Chemistry& c, Mathematics& m) {
    int first = getPhysicsMarks(p);
    int second = getChemistryMarks(c);
    int third = getMathematicsMarks(m);
    ma.marks[0] = first;
    ma.marks[1] = second;
    ma.marks[2] = third;
    int sum = 0.0;
    for (int i = 0; i < 3; i++) {
        sum += ma.marks[i];
    }
    return sum;
}

int main() {
    int n;
    
    cin >> n;
    double totalSum = 0.0;
    int physics;
    int chemistry;
    int maths;
    string name;
    Marks marks[n];
    double total[n];

    for (int i = 0; i < n; i++) {
        cin >> name;
        Marks J(i + 1, name);
        marks[i] = J;

        cin >> physics;
        cin >> chemistry;
        cin >> maths;
        Physics p1(physics);
        Chemistry c1(chemistry);
        Mathematics m1(maths);
        total[i] = getTotalMarks(marks[i], p1, c1, m1);
    }

    for (int i = 0; i < n; i++) {
        marks[i].display();
        cout << "Total marks: " << total[i] << endl << endl;
    }

    double average = 0.0;
    for (int i = 0; i < n; i++) {
        totalSum += total[i];
    }
    cout << "Total marks of the class is: " << totalSum << "\nThe average marks of the class is: " << totalSum / n;

    return 0;
}
/*
2
Ashwin
90
90
89
Aasin
67
89
78
Output 1 :

Roll Number: 1 
Name: Ashwin 
Total marks: 269

Roll Number: 2 
Name: Aasin 
Total marks: 234

Total marks of the class is: 503
The average marks of the class is: 251.5
*/