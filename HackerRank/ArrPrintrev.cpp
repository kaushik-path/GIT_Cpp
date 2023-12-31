#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    //int n=4;
    //cin>>n;
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    } 
    reverse( begin(arr), end(arr));
    for(int i=0;i<4; ++i){
        cout<<" "<<arr[i]<<" ";
    } 
    return 0;
}