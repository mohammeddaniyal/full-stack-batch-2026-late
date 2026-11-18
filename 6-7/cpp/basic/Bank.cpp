#include<iostream>

using namespace std;

// Anshi Dev 2010
class Bank
{
    private:
    int balance=0; // property 
    public:
    void check_balance()
    {
        cout<<"You have "<<balance<<" .rs"<<endl;
    }

    void deposit(int amount)
    {
        // ATM 

        balance=balance+amount;
    }
};


// User : Yashi 2020
int main()
{
    Bank radha;
    radha.check_balance();
    

    radha.deposit(5000);

    radha.check_balance();

    return 0;
}