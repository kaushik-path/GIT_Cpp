#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class MenuItem{
    public:
    float price;
    int persons;

    public:
    virtual float calculation(int person)=0;
};

class Appetizer:public MenuItem{
    public:
    float calculation(int persons){
        return price * persons;
    }
};

class Maincourse : public MenuItem{
    public: 
    float calculation(int person){
        return price * persons;
    }
};

int main(){
    int n, N, M;
    cin >> n >> N >> M;

    vector <Appetizer> apps(N);
    for (int i = 0; i < N; ++i)
    {
        cin>>apps[i].price;
    }

    vector <Maincourse> mains(M);
    for (int i = 0; i < M; ++i)
    {
        cin>>mains[i].price;
    }

    float total = 0.0;
    for (int i = 0; i < N; ++i)
    {
        total = apps[i].calculation(n);
    }
    
    for (int i = 0; i < N; ++i)
    {
        total = mains[i].calculation(n);
    }

    cout<<"Rs.";
    cout << fixed << setprecision(2) <<total;

    return 0;
}