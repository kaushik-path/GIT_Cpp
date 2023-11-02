#include <iostream>
using namespace std;
class A {
public:
A(int n) {
        cout << n;
}
};
class B : public A {
public:
B(int n, double d) : A(n) {
        cout << d;
            }
};
class C : public B {
public:
C(int n, double d, char ch) : B(n, d) {
        cout << ch;
}
};
int main() {
    C c(5, 4.3, 'R');
    return 0;
}
/*
54.3R
*/