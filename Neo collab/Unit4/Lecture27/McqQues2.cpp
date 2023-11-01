#include <iostream>
class Base {
public :
    void display() {
    std::cout<<"Base";
    }
};
class Derived: public Base {
public:
    void display() {
    std::cout<<"Derived";
    }
};
int main() {
Derived d;
Base& b=d;
b. display();
return 0;
}