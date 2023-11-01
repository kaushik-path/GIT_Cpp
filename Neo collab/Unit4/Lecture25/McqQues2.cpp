/*
What will be the output for the following code?
*/
#include <iostream>
class MyC1ass {
public:
operator bool() {
return true;
}
};
int main(){
MyC1ass obj;
bool value = obj;
std::cout << value;
return 0;
}
/*
answer : 1
*/