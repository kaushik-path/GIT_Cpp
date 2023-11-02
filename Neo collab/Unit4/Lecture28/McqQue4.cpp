#include <iostream>
using namespace std;
class Component {
public:
virtual void traverse() = 0;
};
class Leaf : public Component {
    int value;
    public:
    Leaf(int val) {
         value = val;
    }
    void traverse() {
        cout << value << ' ';
            }
};
class Composite : public Component {
    Component* children[3];
    int size;
public:
Composite() {
        size = 0;
}
void add(Component* ele) {
        if (size < 3) {
               children[size++] = ele;
        }
}
void traverse() {
        for (int i = 0; i < size; i++)
        children[i]->traverse();
    }
};
int main() {
    Composite containers[4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
               containers[i].add(new Leaf(i * 3 + j));
        }
    }
    for (int k = 1; k < 4; k++) {
        containers[0].add(&(containers[k]));
    }
    for (int p = 0; p < 4; p++) {
        containers[p].traverse();
    }
 return 0;
}
/*
0 1 2 3 4 5 6 7 8 9 10 11 
*/


