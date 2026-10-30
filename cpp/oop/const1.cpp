#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    public:
    int age;
    char name[35];

    /* 
        a constructor is special method of a class
        which have same name as the class and no return type
        it's invoked implicitly(directly/auto) by the compiler (g++)

        Use Case:

        It is used to intiliaze the Object state(data)

        Rule : 

        In Case we don't provide a constructor in a class, then the compiler will write a empty constructor
        Student()
        {
        }

    */
    // default constructor
    Student()
    {
        age=0;
        strcpy(name,"");
        cout<<"default Constructor invoked"<<endl;
    }
    // Student(int a)
    // {
    //     age=a;
    //     strcpy(name,"");
    // }
    // Student(const char *nm)
    // {
    //     age=0;
    //     strcpy(name,nm);
    // }
    // parameterized constructor
    Student(int a,const char *nm)
    {
        
        cout<<"Parameterized construcrtor"<<endl;
        age=a;
        strcpy(name,nm);
    }
    // copy constructor
   Student(Student &s)// alias (another name)
   {
    cout<<"Copy constructor invoked"<<endl;
        age=s.age;
        strcpy(name,s.name);
   }
   

   // destructor
   // to perform cleanup activity
   ~Student()
   {
        cout<<"Destructor invoked"<<endl;
   }

    void display()
    {
        cout<<"Age : "<<age<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

int main()
{
    // for this object, a parameterized constructor will be invoked
    cout<<"Nice"<<endl;
    Student s(20,"Daniyal"); // a object is being created of Student class named s
    cout<<"Good"<<endl;
    
    // WIHTOUT COPY CONSTRUCTOR BAD WAY
    cout<<"Hey"<<endl;
    // a default constructor will be invoked
    Student s2;
    cout<<"Bye"<<endl;

    s2.age=s.age;
    strcpy(s2.name,s.name);
    s2.display();

    cout<<"Hello"<<endl;
    // a copy constructor will be invoked 
    Student s3(s);
    cout<<"Great"<<endl;

    s3.display();
    return 0;
}