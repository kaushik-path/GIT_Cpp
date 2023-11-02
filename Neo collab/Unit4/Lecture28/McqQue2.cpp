#include <iostream>
using namespace std;
class BaseClass {
    int i;
    public:
    void setInt(int n);
    int getInt( );
};
    class DerivedClass:public BaseClass{
    int j;
    public:
    void setJ(int n);
    int mul();
};
void BaseClass::setInt(int n){
    i=n;
}
    int BaseClass::getInt(){
        return i;
    }

void DerivedClass:: setJ(int n){
    j=n;
}
int DerivedClass::mul( ){
    return j * getInt( ) ;
}

int main() {
DerivedClass ob;
ob.setInt (10) ;
ob.setJ (4) ;
cout << ob.mul( ) ;
return 0;
}
/*
40
*/
