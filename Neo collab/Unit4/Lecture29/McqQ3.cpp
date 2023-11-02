#include <iostream>
class Base {
public:
void display() {
        std::cout << "Base Display" << std::endl;
}};
class Derived : public Base {
public:
void display() {
        std::cout << "Derived Display" << std::endl;
}};
int main() {
    Derived obj;
    obj.display();
    return 0;
}