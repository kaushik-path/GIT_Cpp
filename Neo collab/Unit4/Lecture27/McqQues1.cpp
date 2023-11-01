#include <iostream>
using namespace std;
class Base{
public:
    Base(){}
    ~Base() { }
protected :
private:
};

class Derived: public Base{
public:
    Derived() { }
    ~Derived() {}
    private:
    protected :
};
int main(){
    cout << "The program executed"<< endl;
    return 0;
}
/*
The program executed
*/
