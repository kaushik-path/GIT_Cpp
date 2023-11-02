#include <iostream>
using namespace std;
class BaseC1ass{
int x;
public:
void setx(int n){
    x=n;
    }
void showx(){
    cout << x;
    }
};
class DerivedC1ass: private BaseC1ass{
int y;
public:
void setxy(int n,int m){
    setx(n) ;
    y=m;
}
void showxy(){
    showx( ) ;
    cout<<y<<'\n';
}
};
int main(){
    DerivedC1ass ob;;
    ob.setxy(10, 20);
    ob.showxy();
    return 0;
}
/*
1020
*/
