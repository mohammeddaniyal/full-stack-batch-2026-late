#include<iostream>
using namespace std;


class Bulb
{
    private:
    string name;
    int wattage;
    public:

    Bulb(string n)
    {
        name=n;
        cout<<"Constructor is invoked for "<<name<<endl;
    }

    void setWattage(int w)
    {
        cout<<"Hamara Nokar "<<name<<endl;
        if(w>=0 && w<=240)
        wattage=w;
        else 
        cout<<"You're Fired, bhaggggg nikalllll"<<name<<endl;
    }
};

int main()
{
    Bulb elon_musk("Alien Musk"),ambani("Mota Iron Man");

    cout<<"Meowwww ki apni par"<<endl;

    elon_musk.setWattage(1000);

    ambani.setWattage(-100);

    return 0; 
}