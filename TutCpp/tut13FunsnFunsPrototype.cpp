#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 

//This is our main Function
int main(){
    int n1,n2;
    cout<<"enter 1 no."<<endl;
    cin>>n1;
    cout<<"enter 2 no."<<endl;
    cin>>n2;
    // num1 and num2 are actual parameters
    cout<<"Sum is "<<sum(n1,n2);
    g();
    return 0;
}

int sum(int q, int w){
    /* Formal Parameters 
    q and w will be taking values from actual parameters num1 and num2.*/
    int e=q+w;
    return e;
}
void g(){
    cout<<"\nHello, Good Morning";
}