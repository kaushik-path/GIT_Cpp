/*
What is output??
*/
#include <iostream>
class Distance {
    private :
        double meters;
    public:
        Distance(double m = 0.0) : meters(m) { }
        operator int() {
        return static_cast<int>(meters*1000) ;
        }
        operator std::string() {
        return std::to_string(meters) + "meters";
        }
};
int main(){
    Distance distanceObj(2.5);
    int intVa1ue = distanceObj;
    std::string stringVa1ue= distanceObj;
    
    std::cout << "Int value:" << intVa1ue << std::endl;
    std::cout << "String value:" << stringVa1ue << std::endl;
    
    return 0;
}
/*
Int value:2500
String value:2.500000meters
*/

