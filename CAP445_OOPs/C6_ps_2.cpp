/*

*/
#include<iostream>
using namespace std;

class Class1{
    public:
    int num1 ,num2;

//   Class1()
//   {
// cin>>num1;
// cin>>num2;
// }
    void setData(){
        cin>>num1;
        cin>>num2;
    }
    void displayData(){
        cout<<num1+num2<<endl;
    }
};

class Class2{
    public:
    Class1 c1;
    void printResult(){
       c1.displayData();
    }
};
int main(){
    // int x, y;
    Class2 c2;
     c2.c1.setData();
     c2.printResult();
    return 0;
}