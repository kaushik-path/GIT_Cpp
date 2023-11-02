/*
Problem Statement
We can implement multi-level inheritance in our application. Let's consider the domain 'Stall' and its types. There is a multilevel inheritance.
Create a class SilverStalI with the following protected attributes:
Attributes : Datatype
name Strin
Detail String
Owner String
Cost Int
Create a default constructor and a parameterized constructor.
Include appropriate accessors and mutators.
The total cost computes only the stall cost.
Create a class called GoldStall which extends Silverstall with the following private attributes:
Attributes : Datatype
tvSet Int
Create a default constructor and a parameterized constructor.
Include appropriate accessors and mutators.
Total cost computed by stall cost and TV set cost Each TV set costs 100 rupees.
Create a class PlatinumStall which extends GoldStall (i.e., Multilevel Inheritance) with the following private attributes:
Attributes : Datatype
projector Int
Create a default constructor and a parameterized constructor
Include appropriate accessors and mutators.
The total cost is computed by stall cost, TV set cost, and projector cost, where each TV set and projector cost 100 Rs and 500 Rs, respectively.
Create a driver class named Main to test the above class.
Input format :
The first line contains an integer n, where n is either 1, 2, or 3.
If n is l, then the next line contains the following inputs, separated by a space:
name (string): the name of the silver stall.
detail (string): the detail of the silver stall.
owner (string): the name of the owner of the silver stall.
cost (integer): the cost of the silver stall.
If n is 2, then the next line contains the following inputs separated by a space:
name (string): the name of the gold stall.
detail (string): the detail of the gold stall.
owner (string): the name of the owner of the gold stall.
cost (integer): the cost of the gold stall.
tvSet (integer): the number of TV sets in the gold stall.
If n is 3, then the next line contains the following inputs separated by a space:
name (string): the name of the platinum stall.
detail (string): the detail of the platinum stall.
owner (string): the name of the owner of the platinum stall.
cost (integer): the cost of the platinum stall.
tvSet (integer): the number of TV sets in the platinum stall.
projector (integer): the number of projectors in the platinum stall.
If n is anything other than l, 2, or 3, then the output should be "Invalid Input".
Output format :
If n is l, the output displays the cost of the silver stall.
If n is 2, the output displays the cost of the gold stall plus the cost of each TV set (which is 100).
If n is 3, the output displays the cost of the platinum stall plus the cost of each TV set (which is 100) plus the cost of each projector (which is 500).
If n is anything other than l, 2, or 3, the output displays "Invalid Input".
*/
#include <iostream>
#include <string>
using namespace std;

class SilverStall {
protected:
    string name;
    string detail;
    string owner;
    int cost;

public:
    SilverStall() {}
    SilverStall(string n, string d, string o, int c) : name(n), detail(d), owner(o), cost(c) {}

    int getTotalCost() {
        return cost;
    }
};

class GoldStall : public SilverStall {
private:

public:
    int tvSet;
    GoldStall() {}
    GoldStall(string n, string d, string o, int c, int t) : SilverStall(n, d, o, c), tvSet(t) {}

    int getTotalCost() {
        return cost + (tvSet * 100);
    }
};

class PlatinumStall : public GoldStall {
private:
    int projector;

public:
    PlatinumStall() {}
    PlatinumStall(string n, string d, string o, int c, int t, int p) : GoldStall(n, d, o, c, t), projector(p) {}

    int getTotalCost() {
        return cost + (tvSet * 100) + (projector * 500);
    }
};

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        string name, detail, owner;
        int cost;
        cin >> name >> detail >> owner >> cost;
        SilverStall silverStall(name, detail, owner, cost);
        cout << silverStall.getTotalCost() << endl;
    } else if (n == 2) {
        string name, detail, owner;
        int cost, tvSet;
        cin >> name >> detail >> owner >> cost >> tvSet;
        GoldStall goldStall(name, detail, owner, cost, tvSet);
        cout << goldStall.getTotalCost() << endl;
    } else if (n == 3) {
        string name, detail, owner;
        int cost, tvSet, projector;
        cin >> name >> detail >> owner >> cost >> tvSet >> projector;
        PlatinumStall platinumStall(name, detail, owner, cost, tvSet, projector);
        cout << platinumStall.getTotalCost() << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}

/*
Input 1 :
1
SilverStall1
This_is_a_silver_stall
John_Doe
5000
Output 1 :
5000
*/