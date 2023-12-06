#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
    {
        vector <string> course;
        int total;
        string strCourse;
        cout<<"Enter Total No. of records"<<endl;
        cin>>total;
        cout<<"Add List of Courses"<<endl;
        // adding the outputs
        for (int i=1;i<=total;i++)
        {
            cin>>strCourse;
            course.push_back(strCourse);
        }
        //for printing the outputs
        vector<string>::iterator itr;
        for (itr=course.begin(); itr!=course.end(); itr++)
        {
            cout<<*itr<<" ";
        }
        return 0;
    }