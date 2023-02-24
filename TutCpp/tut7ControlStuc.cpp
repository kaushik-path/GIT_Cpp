#include<iostream>
using namespace std;
int main()
{
   //cout<<" example of Control structure If, if-else, switch case:";
    int age;
    cout<<" Tell me ur age"<<endl;
    cin>>age;

    /************ Control structure If else-if else ladder **********/
    // if(age<18){
    //     cout<<"you can't come to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"Get a kid Pass to entry in a party"<<endl;
    // }
    // else {
    //     cout<<"Congo Entry";
    // }
    // return 0;

    /************ Control structure Switch Case: **********/
    switch (age)
    {
    case 18:
        cout<<"Your age is 18"<<endl;
        break;
    case 14:
        cout<<"Your age is 14"<<endl;
        break;
    case 1:
        cout<<"Your age is 1"<<endl;
        break;
    default:
        cout<<"None special cases"<<endl;
        break;
    }
    cout <<"Done by switch cases"<<endl;
    return 0;
}