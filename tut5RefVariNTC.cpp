#include <iostream>
using namespace std;

int c=100;

int main()
{   
    //************** Build-in Data Types ***************
    int a, b, c;
    cout<<"value of a"<<endl;
    cin>>a;
    cout<<"value of b"<<endl;
    cin>>b;
    c=a*b;
    cout<<"Sub of a*b "<<c<<endl;
    cout<<"Global varible is "<<::c;
    cout<<endl;

    //************** Float doubles and Long Doubles ***************
    float d=3.14;
    long double e=3.14;
    cout<<"size of 3.14:"<<sizeof(3.14)<<endl; 
    cout<<"size of 3.14f:"<<sizeof(3.14f)<<endl; 
    cout<<"size of 3.14F:"<<sizeof(3.14F)<<endl; 
    cout<<"size of 3.14l:"<<sizeof(3.14l)<<endl; 
    cout<<"size of 3.14L:"<<sizeof(3.14L)<<endl; 
    cout<<endl;

    //************** Reference Varibles ***************
    // x and y is same means Kaushik(x)---->Ronnie(y)
    int x=12;
    int & y=x;               //"&" helps in reference
    cout<<x<<endl;
    cout<<y<<endl;

    //************** TypeCasting ***************
    int v=10;
    float m=15.32;
    cout<<"The value of m "<<(int)m<<endl;
    // int(m) it will change float into int we can also write as (int)m
    cout<<"v+m :"<<v+m<<endl;
    cout<<"v+int(m) :"<<v+int(m)<<endl;
    cout<<"v+m :"<<v+(int)m<<endl;
    

    return 0;
}
