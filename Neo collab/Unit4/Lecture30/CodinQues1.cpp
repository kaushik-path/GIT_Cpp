/*
Problem Statement
You are tasked with developing a program to manage a company's project assignments. The program should utilize a class hierarchy involving a base class Employee
and derived classes Manager, Engineer, and Technician, each with their own constructors and destructors.
Your goal is to implement the program in a way that showcases the order of execution of constructors and destructors in inheritance.
Input format :
The first line contains an integer, numEmpIoyees, representing the number of employees in the company.
The second line contains an integer, numProjects, representing the number of projects in the company.
The following numprojects lines contain the names of the projects, one project name per line.
For each of the numEmployees employees, the input consists of two lines:
-The first line contains the name of the employee.
-The second line contains the designation of the employee, which can be one of the following: "Manager", "Engineer", or "Technician".
-Then numprojects lines follow, denoting y/ Y - if the employee should be assigned to the project or n/N - the employee should not be assigned to the project.
Output format :
For each project, the program should display the following information:
-The name of the project.
-The list of employees assigned to the project.
-The number of employees assigned to the project.
If any other designation is entered, print "Invalid designation. Skipping employee."
*/
/*
Input 1 :
2
2
Demo
Login
Alice
Engineer
y
n
Bob
Technician
y
y
Output 1 :
Creating employee: Alice
Creating engineer: Alice
Creating employee: Bob
Creating technician: Bob
Project Details:
Project: Demo
Assigned Employees:
- Alice
- Bob
Number of Employees Assigned: 2
Project: Login
Assigned Employees:
- Bob
Number of Employees Assigned: 1
Destroying engineer: Alice
Destroying employee: Alice
Destroying technician: Bob
Destroying employee: Bob
*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include<string>
class Employee {
public:
    std::string name;
    std::vector<std::string> projects;
    Employee(std::string name) : name(name) {
        std::cout << "Creating employee: " << name << std::endl;
    }
    virtual ~Employee() {
        std::cout << "Destroying employee: " << name << std::endl;
    }
};

class Manager : public Employee {
public:
    Manager(std::string name) : Employee(name) {
        std::cout << "Creating manager: " << name << std::endl;
    }
    ~Manager() {
        std::cout << "Destroying manager: " << name << std::endl;
    }
};

class Engineer : public Employee {
public:
    Engineer(std::string name) : Employee(name) {
        std::cout << "Creating engineer: " << name << std::endl;
    }
    ~Engineer() {
        std::cout << "Destroying engineer: " << name << std::endl;
    }
};

class Technician : public Employee {
public:
    Technician(std::string name) : Employee(name) {
        std::cout << "Creating technician: " << name << std::endl;
    }
    ~Technician() {
        std::cout << "Destroying technician: " << name << std::endl;
    }
};

int main() {
    int numEmployees, numProjects;
    std::cin >> numEmployees >> numProjects;

    std::vector<std::string> projectNames(numProjects);
    for(int i = 0; i < numProjects; i++) {
        std::cin >> projectNames[i];
    }

    std::vector<Employee*> employees;
    for(int i = 0; i < numEmployees; i++) {
        std::string name, designation;
        std::cin >> name >> designation;

        Employee* employee = nullptr;
        if(designation == "Manager") {
            employee = new Manager(name);
        } else if(designation == "Engineer") {
            employee = new Engineer(name);
        } else if(designation == "Technician") {
            employee = new Technician(name);
        } else {
            std::cout << "Invalid designation. Skipping employee." << std::endl;
            continue;
        }

        for(int j = 0; j < numProjects; j++) {
            char assignProject;
            std::cin >> assignProject;

            if(assignProject == 'y' || assignProject == 'Y') {
                employee->projects.push_back(projectNames[j]);
            }
        }

        employees.push_back(employee);
    }

    
    std::cout << "\nProject Details:";
    
    for(const auto& projectName : projectNames) {
        int count = 0;

        if (projectName != projectNames[0]) { 
            std::cout << "\n";
        }

        std::cout << "\nProject: " << projectName;
        std::cout << "\nAssigned Employees:";

        for(const auto& employee : employees) {
            if(std::find(employee->projects.begin(), employee->projects.end(), projectName) != employee->projects.end()) {
                count++;
                std::cout << "\n- " << employee->name;
            }
        }

        std::cout << "\nNumber of Employees Assigned: " << count<<"\n";
    }

    
    for(auto& employee : employees) {
        delete employee;
    }

    return 0;
}
