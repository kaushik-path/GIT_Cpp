#include<iostream>
using namespace std;

class TT
{
// private:
//     /* data */
public:
};


int main(){
    int per, dist[10];
    int out[10];
    cout<<"Enter person"<<endl;
    cin>>per;
    if (per>= 1 && per<=10)
    {
      for ( int i = 0; i < per; i++)
        {
            cout<<"enter dist =";
            cin>>dist[i];
            if (dist[i]>=1 && dist[i]<= 10)
            {
                out[i]=dist[i]*10;
            }
            
            // cin>>per[dist];
            // if (per[dist]>=1 && per[dist]<=10)
            // {
            //     out[dist] = per[dist]*10;
            //     cout<<out[dist];
            // }
        }  
   }
    
    for (int i = 0; i < per; i++)
    {
        cout<<"result = "<<out[i]<<endl;
    }

    return 0;
}