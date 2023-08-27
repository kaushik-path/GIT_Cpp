#include<iostream>
//Create one structure to take details of employee as a EmployeeName, EmployeeId and EmployeeSalary.
using namespace std;

class Employee
{
// private:
//     /* data */
public:
    int Emp_Id;
    string Emp_Name;
    float Emp_Sal;

    void setDetails(){
        cout<<"Enter Employee ID"<<endl;
        cin>>Emp_Id;
        //cin.ignore; //If want to print full name before Emp ID to ignore the error1
        cout<<"Enter Employee Name"<<endl;
        cin >> Emp_Name;
        //getline(cin,Emp_Name); //For Full Name 
        cout<<"Enter Employee Salary"<<endl;
        cin>>Emp_Sal;
    }
    void getDetails(){
        cout<<"Name : " << Emp_Name <<endl;
        cout<<"Employee ID : "<<Emp_Id<<endl;
        cout<<"Salary : "<<Emp_Sal<<endl;
    }
};

int main(){
    Employee Emp1;
    Emp1.setDetails();
    Emp1.getDetails();
    return 0;
}