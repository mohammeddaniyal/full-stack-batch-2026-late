#include<iostream>
using namespace std;
class Car
{
    private:
    int price;
    public:
    void setPrice(int p)
    {
        if(p<=0) {
            price=20000;
            cout<<"Invalid price"<<endl;
        }
        else price=p;
    }
    int getPrice()
    {
        return price;
    }
};
int main()
{
    Car c;
    c.setPrice(300000);
    cout<<"Car price is "<<c.getPrice()<<endl;
}