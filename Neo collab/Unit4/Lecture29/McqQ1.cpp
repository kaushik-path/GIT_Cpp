#include <iostream>
class Base {
public:
    int data;
};
class Derived1 : virtual public Base {
public:
    Derived1() {
        data = 10;
    }};
class Derived2 : virtual public Base {
public:
 Derived2() {
        data = 20;
 }};
 class Derived3 : public Derived1, public Derived2 {
public:
  void display() {
        std::cout << "Data: " << Derived2::data << std::endl;
  }};
  int main() {
    Derived3 obj;
    obj.display();
    return 0;
  }