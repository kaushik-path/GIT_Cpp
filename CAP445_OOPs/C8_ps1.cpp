#include<iostream>
#include<iomanip>
using namespace std;

class Vehicle{
    protected :
    float dist;
    float time;
};
class Car : public Vehicle{
    public:
    float speed;
    float getData(){
        //cout<<"Distance"<<endl;
        cin>>dist;
        //cout<<"Time"<<endl;
        cin>>time;
        return 0;
    }
    float getSpeed(){
        speed = dist/time;
        cout<<setprecision(3)<<speed;
        return 0;
    }
};

int main(){
    Car C1;
    C1.getData();
    C1.getSpeed();
    return 0;
}