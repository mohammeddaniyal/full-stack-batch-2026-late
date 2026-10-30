#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout<<"ggggggghhhh"<<endl;
    }
};

class Cat:public Animal
{
    public:
    void sound()
    {
        cout<<"meow meowwww"<<endl;
    }
};

class Dog:public Animal
{
    public:
    void sound()
    {
        cout<<"bhow bhow"<<endl;
    }
};

int main()
{
    Animal a;
    //a.sound();

    Animal *a1;
    a1=&a;
    a1->sound();
    
    Cat c;

    a1=&c;
    a1->sound();

    Dog d;
    a1=&d;
    a1->sound();
    

    return 0;
}