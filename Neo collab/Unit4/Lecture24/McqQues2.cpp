/*
Which of the following options correctly replaces "Line X" to convert the object obj of class MyClass to an int value when calling the printInt function?
#include <iostream>
class MyC1ass {
public:
explicit operator int() {
return data;
}
private :
int data
void printlnt(int num) {
std: : cout num;
}
};
int main() {
MyC1ass obj;
printlnt (obj); // Line X
return 0;
}
*/
#include <iostream>

class MyClass {
public:
    explicit operator int() {
        return data;
    }

private:
    int data; // Add this line to declare the member variable.
};

void printInt(int num) { // Fix the function name and add missing curly braces.
    std::cout << num; // Fix the cout statement.
}

int main() {
    MyClass obj;
    // ANSWER //
    int intValue = static_cast<int>(obj); // Line X: Convert object to int using explicit conversion operator.
    printInt(intValue); // Call the function with the int value.
    return 0;
}

