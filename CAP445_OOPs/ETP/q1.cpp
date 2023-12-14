// Create a C++ class Person with private data members' names and ages. Implement a default
// constructor to initialize these members. Create a member function to display the person's
// information.

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        
    }
    // Member function to set person's information
    void setInformation(const std::string& newName, int newAge) {
        name = newName;
        age = newAge;
    }

    // Member function to display person's information
    void displayInformation() const {
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }
};

int main() {
    // Creating an instance of the Person class
    Person person;

    // Setting information for the person
    person.setInformation("John Doe", 25);

    // Displaying the person's information
    person.displayInformation();

    return 0;
}
