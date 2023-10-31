#include<iostream>
#include<Windows.h>
#include<unistd.h>

using namespace std;
class WindowColor{
    protected:
    void getcolor(string name)
    {
        if (name=="blue");
        {
            cout<<"Wait..."<<endl;
            sleep(10);
            cout<<"Background color changed in blue color"<<endl;
            system("color 17");
        }
        else if (name=="Red")
        {
            cout<<"Wait..."<<endl;
            sleep(10);
            cout<<"Background color changed in red color"<<endl;
            system("color 17");
        }
        else{
            cout<<"color nA";
        }  
    }
};
class ConsoleBackground:public WindowColor{
    public:
    void setName(){
        string clr;
        cout<<"enter Color"<<endl;
        cin>>clr;
        getColor(clr);
    }
};

int main(){
    ConsoleBackground C1;
    C1.setName();
    return 0;
}