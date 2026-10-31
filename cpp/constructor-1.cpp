#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    string name;

    // Student()
    // {
    //     //empty constructor
    // }

    // default constructor
    Student()
    {
        age=0;
        name="";
    }
    // parameterized constructor 
    Student(int a,string n)
    {
        cout<<"Constructor got invoked"<<endl;
        age=a;
        name=n;
    }
    // default parameterized constructor
    // Student(int a,string n="abhi")
    // {
    //     cout<<a<<n<<endl;
    //     age=a;
    //     name=n;
    // }


    Student(Student &s)
    {
        age=s.age;
        name=s.name;
    }

};


int main()
{
    Student s(45,"Yash");
    Student s2(s);
    cout<<"Hello "<<s2.age<<s2.name<<endl;
  

    return 0;
}