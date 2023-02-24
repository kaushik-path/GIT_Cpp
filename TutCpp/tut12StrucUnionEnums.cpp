#include<iostream>
using namespace std;

/*  Structure: its a user define DT which is used to store different types of DT  */

typedef struct employee // typedef is use for change name of struct employee to ep
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

/*  Union: its a user define DT which is used to save the memory and its used one Data in one time like,
if i want print value of rice then its only print rice value */
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 


    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
