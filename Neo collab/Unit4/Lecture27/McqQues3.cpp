#include <iostream>
class Base {
public :
    int x;
    protected:
    int y;
    private :
    int z;
};
class Derived: public Base {
    public:
    void display() {
    std::cout << x;
    }
};
int main() {
Derived d;
d. display();
return 0;
}