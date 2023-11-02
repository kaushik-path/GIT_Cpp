/*
Problem Statement:
You are given three classes: A, B, and C. All three classes implement their own version of func.
In class A, func multiplies the value passed as a parameter by 2
In class B, func multiplies the value passed as a parameter by 3
In class C, func multiplies the value passed as a parameter by 5
Implement class D:
You need to modify the class D and implement the function update_val, which sets D's val to new _ val by manipulating the value by only calling the functions defined in
classes A, B, and C.
Explanation:
Initially, val
A's function is called once:
val = val*2
val = 2
B's function is called once:
val = val*3
val = 6
C's function is called once:
val = val*5
val = 30
Input format :
The input consists of an integer value that has only 2, 3, and 5 as its prime factors.
Output format :
Implement the class to get the output displayed in the sample output.
*/
#include<iostream>
using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D : public A,public B,public C
{

  int val;
  public:
  //Initially val is 1
  D()
  {
    val=1;
  }


  
  void update_val(int new_val)
  {
    while (new_val!=val) {
      if (new_val/val % 2 == 0) A::func(val);
      else if (new_val/val % 3 == 0) B::func(val);
      else if (new_val/val % 5 == 0) C::func(val);
    }
  }
 
  void check(int); 
};
void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);

}
/*
Input 1 :
30
Output 1 :
Value = 30
A's func called 1 times 
B's func called 1 times
C's func called 1 times

*/