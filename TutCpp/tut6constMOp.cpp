#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // int a=3;
    // cout<<"value was : "<<a<<endl;
    // a=4;
    // cout<<"value is : "<<a<<endl;

    //****************** Constants ****************

    const int a=7;
    cout<<"value is : "<<a<<endl;
    // int a=5;  **not working cz of const value
    //cout<<"value is : "<<a<<endl;

    //****************** Manipulators **************** 

    // 1.endl= for break the line as like <br>
    // 2.setw= for break the line

    // without setw()
    int b=238, c=6154;
    cout<<"Value of a "<<a<<endl;    
    cout<<"Value of b "<<b<<endl;    
    cout<<"Value of c "<<c<<endl;    
    
    // with setw()
    //for setw u net to have a new header name which is <iomanip>
    cout<<"Value of set w a "<<setw(4)<<a<<endl;    
    cout<<"Value of set w b "<<setw(4)<<b<<endl;    
    cout<<"Value of set w c "<<setw(4)<<c<<endl;  

    //****************** Operator Precedence **************** 
    // like bodomas in C++ first operator first
    // int d = (a*b)+c;
    int d = ((((a*b)+23)-15)+c);
    cout<<d;

    return 0;
}
