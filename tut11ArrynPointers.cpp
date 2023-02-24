#include<iostream>
using namespace std;

int main(){
    int Marks[]={29,56,64,95};
    // if I want change the value of array I've to change before its run EG:
    Marks[1]=0;
    // cout<<Marks[0]<<endl;
    // cout<<Marks[1]<<endl;
    // cout<<Marks[3]<<endl;
    // cout<<Marks[2]<<endl;

//array in for loop
// for (int i = 0; i < 4; i++)
// {
//     cout<<"the value of Marks "<<i<<" is "<<Marks[i]<<endl;
// }

//array in while loop
int i=0; /*Array mein Initialization karna pad ta hai like i=0 only int i; likhne se initialize nhi hota*/
// while (i<=3)
// {
//     cout<<"the value of Marks "<<i<<" is "<<Marks[i]<<endl;
//     i++;
// }
 
//aray in do-wile
// do
// {
//     cout<<"the value of Marks "<<i<<" is "<<Marks[i]<<endl;
//     i++;
// } while (i<=3);

//     return 0;

/* Pointers in array*/
int* p = Marks;
cout<<*(p++)<<endl;
//cout<<*p<<endl; // i ki value 0 hai lodey
cout<<*(++p)<<endl;
// cout<<*(++p)<<endl;
// cout<<" Vaule of *p "<<*p<<endl; 
// cout<<" Vaule of *p+1 "<<(*p+1)<<endl; 
// cout<<" Vaule of *p+2 "<<(*p+2)<<endl; 
// cout<<" Vaule of *p+3 "<<(*p+3)<<endl;
return 0; 
}