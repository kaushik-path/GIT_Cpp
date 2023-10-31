#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Product{
    public:
    int ID, quantity;
    float price;
    string name;
    
    void setData(){
        cout<<"Enter Product ID : "<<endl;
        cin>>ID;
        cout<<"Enter Product Name : "<<endl;
        cin>> name;
        cout<<"Enter Product Price : "<<endl;
        cin>>price;
        cout<<"Enter Product Quantity : "<<endl;
        cin>>quantity;
    }

    void getData(){
        cout<<ID<<endl;
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<quantity<<endl;
    }
};

int main(){
    int choise;
    Product p1;
    ofstream fout;
    ifstream fin;
    cout<<"Select your choice"<<endl;
    cout<<"1.Add Product\n 2.Display\n 3.Exit"<<endl;
    switch(choise){
        case 1:
        fout.open("C://Users//Legion//Documents//CPP file Handling//ps1.txt", ios::app);
        p1.setData();
        fout.write((char *)&p1,sizeof(p1));
        fout.close();
        cout<<"Product Added";
        break;

        case 2:
        fin.open("C://Users//Legion//Documents//CPP file Handling//ps1.txt");
        while(!fin.eof())
        {
        p1.getData();
        }
        fin.close();
        break;

        default:
        exit(0);
    }
    return 0;
}