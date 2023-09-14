#include<iostream>
using namespace std;
 
// global variable
int a = 5;
 
// global variable accessed from
// within a function
void o()
{
    cout<<a<<endl;
}
 
// main function
int main()
{
    o();
    // changing value of global
    // variable from main function
    int a = 10;
    cout<<a<<endl;
    o();
    return 0;
}