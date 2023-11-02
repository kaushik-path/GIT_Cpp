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
int main()
{
    Derived obj;
    return 0;
}
/*
Base Constructor
Derived Constructor
Derived Destructor
Base Destructor
*/