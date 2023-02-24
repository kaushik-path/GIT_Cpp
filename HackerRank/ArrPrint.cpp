#include<iostream>
using namespace std;

int main(){
    int arr[4];
    
    for (int i = 0; i < 4; ++i) {
    cin >> arr[i];
    }
    for (int n = 0; n < 4; ++n) {
    cout << arr[n]<< " ";
    }

    return 0;
}