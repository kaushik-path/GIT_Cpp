#include <iostream>  
using namespace std;  
void change(int* y);  
//Main
int main()  
{  
int x = 3, y = 6 ;  
change(&x);  
cout << "Value of the x is: " << x<< endl;  
cout << "Value of the y is: " << y<< endl;  
return 0;  
}  
// 
void change(int* y)  
{  
&y = 5;  
}  