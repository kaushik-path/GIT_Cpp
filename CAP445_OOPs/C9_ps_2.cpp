/*
Design one student class along with its attributes reg no and name and create one member Function student details which is used to take the details of students now same student is giving or attending, exam and one event project development now create two different class: exam and project which is derived from student class create one more class result which is derived from class exam and project for displaying the result of student who is participating in exam and project development
Student
Exam : Project
Result
create one 
*/
#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
    int RegNo;
    string sName;
    Student(){
        RegNo=5859;
        sName="Kap";
    }
    void studentDetails(){
        cout<<"Reg No.: "<<RegNo<<endl;
        cout<<"Name: "<<sName<<endl;
    }
};
class Exam:virtual public Student{
    protected:
    string examName;
    public:
    void ExamDetail(){
        cout<<"Exam Result: "<<"PASS"<<endl;
    }
};
class Project:virtual public Student{
    public:
    void ProjectDetail(){
        cout<<"Project Result: "<<"FAIL"<<endl;
    }
};
class Result: public Project, public Exam{
    public:
    void Detail(){
        studentDetails();
        ExamDetail();
        ProjectDetail();
    }
};


int main(){
    Result R;
    R.Detail();
    return 0;
}