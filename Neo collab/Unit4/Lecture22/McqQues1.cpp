#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    MyClass operator-() {
        return MyClass(-value);
    }
    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj(8);
    MyClass result = -obj;
    std::cout << result.getValue();
    return 0;
}