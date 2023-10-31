#include <iostream>

class Box {
public:
    int length, width, height;
    
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Overload the + operator to concatenate dimensions of two boxes
    Box operator+(const Box& other) {
        Box temp(0, 0, 0);
        temp.length = this->length + other.length;
        temp.width = this->width + other.width;
        temp.height = this->height + other.height;
        return temp;
    }
};

int main() {
    Box box1(1, 2, 3);
    Box box2(4, 5, 6);
    Box result = box1 + box2; //answer +
    
    std::cout << "Concatenated Box dimensions: ";
    std::cout << "Length: " << result.length << ", ";
    std::cout << "Width: " << result.width << ", ";
    std::cout << "Height: " << result.height << std::endl;

    return 0;
}
