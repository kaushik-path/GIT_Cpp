#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    MyClass operator++() {
        return MyClass(++value);
    }
    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj(5);
    ++obj;
    std::cout << obj.getValue();
    return 0;
}