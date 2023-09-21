#include<iostream>
using namespace std;

struct MyStructure
{
    int num[10], i;
    int getMax()
    {
        cout<<" enter 10 Number"<<endl;
        for (i = 0; i < 10; i++)
        {
            cin>>num[i];   
        }   
        cout<<"Array are :"<<endl;
        for (i = 0; i < 10; i++)
        {
            cout<< num[i]<< " ";
        } 
                int max=num[0];
            for ( i = 1; i < 10; i++)
            {
                if (max<num[i])
                {
                    max=num[i];
                }
            }
                int min=num[0];
                for ( i = 0; i < 10; i++)
                {
                    if (min>num[i])
                    {
                    min=num[i];
                    }
                }
        cout<<"Maximun value :"<<max<<endl;
        cout<<"Minimun value :"<<min<<endl;
    } 
};

int main(){
    struct MyStructure S1;
    S1.getMax();
    return 0;
}