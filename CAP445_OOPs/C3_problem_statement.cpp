#include<iostream>
using namespace std;

class employee
{
    public:
    static int empID;
    employee()
    {
        empID++;
    }
    static void getID()
    {
        cout<<"Emp ID ="<<empID<<endl;
    }
};

    int employee::empID=0;


int main(){
    employee e1;
    //employee::getID();
    e1.getID();
    employee e2;
    //employee::getID();
    e2.getID();
    return 0;
}