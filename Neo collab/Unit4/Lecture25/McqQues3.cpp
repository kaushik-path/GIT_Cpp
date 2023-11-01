/*
What will be the output for the following code?
*/
#include <iostream>
class MyC1ass {
public:
operator int() {
return 42;
}
};
int main(){
    MyC1ass obj;
    int value = obj;
    std::cout << value << std::endl;
    return 0;
}
/*
The code will output "42".
*/
