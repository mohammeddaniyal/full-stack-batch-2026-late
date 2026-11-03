#include<iostream>
using namespace std;

class Bank
{
    private:
    int balance=0;
    int acc_num;
    public:
    void deposit(int amount)
    {
        balance+=amount;
        cout<<"You have successfully deposited amount of "<<amount<<" !!!!"<<endl;

    }
    void withdraw(int amount)
    {   
        if(amount>balance) 
        {
            cout<<"Insufficient balance"<<endl;
            return;
        }
        balance-=amount;
        cout<<"You have withdraw amount of "<<amount<<" is successful!!!!"<<endl;
    }
    void checkBalance()
    {
        cout<<"You Have "<<balance<<".rs"<<endl;
    }
    // Overload the + operator to add balances of two bank accounts
    int operator+(Bank &other) {
        return balance+other.balance;
    }

};


int main()
{
    Bank canara;
    Bank sbi;

    canara.deposit(10000);
    sbi.deposit(4500);

    canara.checkBalance();
    sbi.checkBalance();

    int a=10;
    int b=20;

    cout<<a+b<<endl;

    cout<<"Total : "<<canara+sbi<<endl;

    
    return 0;
}