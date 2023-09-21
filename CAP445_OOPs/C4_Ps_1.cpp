/******** Upsc result check ******/

#include<iostream>
using namespace std;

class Upsc{
    private:
    int resultList[5] = {101,124,135,148,110};
    public:
    int getresultList(int reg)
    {
        for ( int i = 0; i < 5; i++)
        {
            if (resultList[i]==reg)
            {
                return true;
            }
        }
        return false;
    }
};

int main(){
    int regNo;
    Upsc R1;
    cout<<"Enter Reg No."<<endl;
    cin>>regNo;
    bool result= R1.getresultList(regNo);
    if(result==1){
        cout<<"Pass"<<endl;   
    }
    else{
        cout<<"Not Qualified"<<endl;
    }
    return 0;
}