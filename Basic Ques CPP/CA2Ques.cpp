#include<iostream>
using namespace std;
int main()
{
int i, pn=0, nn=0;
//cout<< "Enter the size of array"<<endl;
//cin>>s;
int arr[7];
for(i=0 ; i<7 ; i++)
{
    cin>>arr[i];
   if(arr[i]<0) // 1 2 3 -5 -9 -8 4
        nn++; // 3
   else
        pn++; // 4
}
cout<< "Negative numbers = "<<nn<<endl;
cout<< "Positive numbers = "<<pn;
return 0;
}

// 1 2 3 -1 -3-5
//out
//3 
//3