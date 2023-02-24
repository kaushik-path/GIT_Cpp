/* Header files and Operators*/
// there are 2 types of header files
// 1. System header files: its come with the compiler 
#include <iostream>
// 2. User defined header files its written by the programmer
// #include<this.h>
using namespace std;

//<<endl;--> end line or break
int main()
{   int a=4, b=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Types of operators are"<<endl;
    // Arithemetic Operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<--a<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //assignment operators--> Used to assign values to varibles
    // int a=4,  b=5;
    //char d=8;

    //Camparison operators
    cout<<"Types of Camparison operators : "<<endl;
    cout<<"The value a==b is "<<(a==b)<<endl;      // equal to equal to
    cout<<"The value a!=b is "<<(a!=b)<<endl;      // not equal to
    cout<<"The value a>=b is "<<(a>=b)<<endl;      // greater than equal to   
    cout<<"The value a<=b is "<<(a<=b)<<endl;      // smaller than equal to
    cout<<"The value a>b is "<<(a>b)<<endl;        // greator than
    cout<<"The value a<b is "<<(a<b)<<endl;        // smaller than
    cout<<endl;

    // logical operators
    cout<<"Types of Logical operators : "<<endl;
    cout<<"The value of logical 'and' operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;      // && 'and' OP
    cout<<"The value of logical 'or' operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;      // || 'or' OP
    cout<<"The value of logical 'not' operator (!(a==b)) is "<<(!(a==b))<<endl;                    // ! 'not' OP
    cout<<endl;

    return 0;

}
