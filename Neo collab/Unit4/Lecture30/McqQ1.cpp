#include <iostream>
class Base {
public:
Base() {
        std::cout << "Base constructor called." << std::endl;
    }
~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};
class Derived : public Base {
public:
Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }
    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}
/*
Base constructor called.
Derived constructor called.
Base destructor called.
*/