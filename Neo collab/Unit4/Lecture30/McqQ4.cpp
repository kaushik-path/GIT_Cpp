#include <iostream>
class Base {
public:
Base() {
        std::cout << "Base Constructor" << std::endl;
}
~Base() {
        std::cout << "Base Destructor" << std::endl;
}
};
class Derived : public Base {
public:
Derived() {
        std::cout << "Derived Constructor" << std::endl;
}
~Derived() {
        std::cout << "Derived Destructor" << std::endl;
}
};
class AnotherDerived : public Derived {
public:
AnotherDerived() {
        std::cout << "AnotherDerived Constructor" << std::endl;
}
~AnotherDerived() {
        std::cout << "AnotherDerived Destructor" << std::endl;
}
};
int main() {
    AnotherDerived obj;
        return 0;
}
