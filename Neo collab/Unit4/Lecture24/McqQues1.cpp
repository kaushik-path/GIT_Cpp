#include <iostream>

class MyC1ass {
public:
    explicit MyC1ass(int value) : data(value) {}
    int getData() const {
        return data;
    }
private:
    int data;
};

int main() {
    int num = 15;
    MyC1ass obj(num); // Corrected line *****ANSWER**** // missing Line
    std::cout << obj.getData();
    return 0; // Corrected return statement
}
