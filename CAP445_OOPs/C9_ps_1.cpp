/*
Hybrid Inheritance
virtual base class
*/
#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    int getA(){
        a=20;
        return a;
    }
};
class B:virtual public A{
    protected:
    int b;
    public:
    int getA(){
        a=20;
        return a;
    }
};
class C:virtual public A{
    protected:
    int c;
    public:
    int getA(){
        a=20;
        return a;
    }
};
class D:public B, public C{
    protected:
    int d;
    public:
    int getD(){
        d=20;
        return a;
    }
};
int main(){
    
    return 0;
}