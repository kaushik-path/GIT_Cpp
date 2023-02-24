#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    
    //&---> address of operator
    cout<<"address of a "<<&a<<endl;  
    cout<<"address of a "<<b<<endl;  

    //*---> value at dereference operator
    cout<<"value at a "<<*b<<endl;
    
    return 0;
}