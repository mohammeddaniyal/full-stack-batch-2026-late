#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout<<"grrrrr"<<endl;
    }
};

class Cat:public Animal
{
    public:
    void sound()
    {
        cout<<"Meow meow..."<<endl;
    }
};

class Dog:public Animal
{
    public:
    void sound()
    {
        cout<<"Bhow bhow...."<<endl;
    }

};


int main()
{
    Animal *a;
    int ch;

    while(1)
    {
    cout<<"1. Cat"<<endl<<"2. Dog"<<endl<<"3. Exit"<<endl;
    cin>>ch;


    switch(ch)
    {
        case 1:
        a=new Cat();
        break;
        case 2:
        a=new Dog();
        break;
        default:
        cout<<"exit"<<endl;
        return 0;
    }

    a->sound();
    }
    return 0;
}