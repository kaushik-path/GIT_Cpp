#include<iostream>
using namespace std;

class Parent{
    private:
        void m1(){
            cout<<"From Parent m1()"<<endl;
        }
        void m2(int a){
            cout<<"From Parent m2()"<<endl;
        }
    public:
    void m1Public(){

    }
    void m2Public(int a){

    }
};
class Child : private Parent{
    void m1child(){

    }
    void m2child(int b){
        
    }
};

int main(){
    Parent P1;
    Child C1;
    return 0;
}