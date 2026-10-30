#include<iostream>
using namespace std;
class Bank
{
    int amount;
    public:
    void balance()
    {
        cout<<"Your account has "<<amount<<endl;
    }
    void deposit(int money)
    {
        amount=amount+money;
    }
    void withdraw(int money)
    {
        amount=amount-money;
    }
};
int main()
{
    Bank b;
    b.balance();
    return 0;
}