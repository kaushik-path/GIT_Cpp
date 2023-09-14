#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"NUM A"<<endl;
    cin>>a;
    // cout<<"NUM B"<<endl;
    // cin>>b;
    for (b = 1; b <= 10; b++)
    {
        cout<<a<< "*" <<b<< "=" <<a*b<<endl;
    }
    
    return 0;
}