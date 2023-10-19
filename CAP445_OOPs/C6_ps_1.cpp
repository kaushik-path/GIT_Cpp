/*
calling consturctor and destructor
*/

#include<iostream>
using namespace std;

class MyClass
{
    public:
    int i,j;

    MyClass(int a, int b){
        i=a;
        j=b;
        cout<<"Constructor Invoked"<<endl;  
    }
    void getdata(){
        cout<<i<<endl;
        cout<<j<<endl;
        int sum = i+j;
        cout<<sum<<endl;
    }
    ~MyClass(){
        cout<<"Destructor Invoked"<<endl;
    }
};

int main(){

    int x, y;
    cin>>x>>y;
    MyClass m1(x,y);
    m1.getdata();
    
    return 0;
}