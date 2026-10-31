#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    string name;

    Student()
    {
        cout<<"Default constructor got invoked"<<endl;
        age=0;
        name="";
    }
    ~Student()
    {
        cout<<"Destructor got invoked"<<endl;
    }

};


int main()
{
    Student s;

    return 0;
}