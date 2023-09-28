#include<iostream>
using namespace std;

int main(){
    int T, i; //testcases
    cin>>T;
    int x[T]; //
    float y[T];
    float result[T];
    for ( i = 0; i < T; i++)
    {
        cin>>x[i];
        cin>>y[i];
        if(x[i]%5==0 && x[i]<y[i]){
            result[i]=(y[i]-x[i])-0.50;
            cout<<result[i];
        }
    }
    
    return 0;
}