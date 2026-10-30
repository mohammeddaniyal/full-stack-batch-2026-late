#include<iostream>
using namespace std;
class Calculator
{
    public:
void add(int a, int b) {
    cout << "The sum of two numbers is " << a + b << endl;
}
void add(int a, int b,int c) {
    cout << "The sum of " << a << " + " << b << " + " << c << " = " << a + b + c << endl;
}
void add(float x,float y)
{
    cout<<"Answer : "<<x+y<<endl;
}
};
int main() {
    Calculator c;
    c.add(5, 10);
    c.add(5, 10, 15);
    c.add(5.6f,8.9f);
    return 0;
}