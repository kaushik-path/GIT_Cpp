
/*
Problem Statement
You are a teacher and want to calculate the grade for a student based on their obtained marks. You have a grading system that assigns grades based on the
percentage of marks obtained out of the total marks. You need to develop a program that takes the obtained marks as input, calculates the grade, and displays the
marks and grade.
Write a program that takes the obtained marks as input and calculates the percentage based on the given marks and a total mark value. Using the percentage,
determine the grade according to the following criteria:
Percentage 90: Grade A+
Percentage >= 80: Grade A
Percentage >= 70: Grade B
Percentage 60: Grade C
Percentage 50: Grade D
Percentage < 50: Grade F
The program should create a Grade object with the obtained marks and the determined grade. It should then convert the Grade object to two basic types: an int for the
marks and a string for the grade: int marks = studentGrade; . Finally, the program should display the marks and grades.
Input format :
The input contains an integer value representing the obtained marks.
Output format :
The output will display the following information:
The first line of output contains obtained marks
The second line of output contains the corresponding grade based on the percentage calculated from the obtained marks.
*/
#include<iostream>
#include<string>
using namespace std;

class Grade{
    string grade;
    int marks;
public:
    Grade(int _marks) : marks(_marks) {
        
        if (marks/5 >= 90) {
            grade = "A+";
        } else if (marks/5 >= 80) {
            grade = "A";
        } else if (marks/5 >= 70) {
            grade = "B";
        } else if (marks/5 >= 60) {
            grade = "C";
        } else if (marks/5 >= 50) {
            grade = "D";
        } else {
            grade = "F";
        }
    }

    operator int() const {
        return marks;
    }

    operator string() const {
        return grade;
    }
};

int main() {
    int obtainedMarks;
    cin >> obtainedMarks;

    Grade studentGrade(obtainedMarks);
    int marks = studentGrade;
    string grade = studentGrade;

    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
/*
Input 1 :
490
Output 1 :
Marks: 490
Grade: A+
*/
