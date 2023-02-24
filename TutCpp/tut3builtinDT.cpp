#include <iostream>
using namespace std;

int glo = 9; //this is global varible. and always local varible priotize first
void sum()
{
    int a;
    cout<<glo;
}
int main()
    {
        int glo = 6;
        // int a=4;
        // int b=5; or "int main is local varible"
        int a=8, b=5;
        float pi=3.14;
        bool IS=false;
        char c='u';
        sum();
        cout<<glo<< IS;
        cout<<endl;

        cout<<"This is tut of Build-in DataTypes:";
        cout<<"\n This is value of a: "<<a<< "\n This is value of b: "<<b;
        cout<<"\n The value of Pi is "<<pi;
        cout<<"\n The value of c is "<<c;
    return 0;
    }

