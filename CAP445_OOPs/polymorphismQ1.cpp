#include <iostream>

using namespace std;
class Area
    {
    protected:
    virtual void getArea()=0; // declaration of function

    };

class Rectangle:public Area
    {
    public:
    void getArea()
        {
        int w,h,res;
        cout<<"Enter height"<<endl;
        cin>>h;
        cout<<"Enter width"<<endl;
        cin>>w;
        res=w*h;
        cout<<"Area of Rectangle is:"<<res<<endl;
        }
    };

class Circle:public Area
    {
    public:
    void getArea()
        {
        int r;
        float res2;
        cout<<"Enter radius"<<endl;
        cin>>r;
        res2=3.14*r*r;
        cout<<"Area of Circle is:"<<res2<<endl;;
        }
    };
int main()
{
    Rectangle r1;
    Circle c1;
    r1.getArea();
    c1.getArea();
    return 0;
}