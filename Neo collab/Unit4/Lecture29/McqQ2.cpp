#include <iostream>
class Base {
public:
 virtual void display() {
        std::cout << "Jawaharlal Nehru" << std::endl;
 }};
 class Derived : public Base {
public:
void display() {
        std::cout << "Mahatma Gandhi" << std::endl;
}};
int main() {
    Derived obj;
    Base& ref = obj;
    ref.display();
        return 0;
}