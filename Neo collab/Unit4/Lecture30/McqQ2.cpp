#include <iostream>
class Base {
public:
Base() {
        std::cout << "Creating Base object." << std::endl;
}
~Base() {
        std::cout << "Destroying Base object." << std::endl;
}
};
class Derived : public Base {
public:
Derived() {
        std::cout << "Creating Derived object." << std::endl;
}
~Derived() {
        std::cout << "Destroying Derived object." << std::endl;
}
};
int main(){
    Derived d;
    return 0;
}
/*
Creating Base object.
Creating Derived object.
Destroying Derived object.
Destroying Base object.
*/