#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float a,b;
    char c,d,e,f;
    string name;
    cout<<"Enter two int numbers : ";
    cin>>x>>y; 

    cout<<"Enter first float :";
    cin>>a;

    cout<<"Enter second float :";
    cin>>b;

    cout<<"Enter four char :";
    cin>>c>>d>>e>>f;

    cout<<"Enter your name ";
    cin>>name;

    cout<<"Int inputs "<<x<<" and "<<y<<endl;
    cout<<"Float inputs "<<a<<" and "<<b<<endl;
    cout<<"Chars "<<c<<d<<e<<f<<endl;
    cout<<"Your name is "<<name<<endl;

    return 0;
}