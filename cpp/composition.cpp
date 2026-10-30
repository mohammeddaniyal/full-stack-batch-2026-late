#include<iostream>
using namespace std;
class SDCard
{
    private:
        int capacity; // property
    public:
    // method
        void setCapacity(int c){
            capacity = c;
        }
        int getCapacity(){
            return capacity;
        }
};
class Mobile
{
    private:
        int price;
        char brandName[35];
        SDCard sdCard; // composition
    public:
        void setPrice(int p){
            price = p;
        }           
        int getPrice(){
            return price;
        }   
        void setBrandName(char b[]){
            strcpy(brandName, b);
        }   
        char* getBrandName(){
            return brandName;
        }
        void setSDCard(SDCard s){
            sdCard = s;
        }
        SDCard getSDCard(){
            return sdCard;
        }
};  

int main()
{
    Mobile m;
    m.setPrice(20000);
    m.setBrandName("Samsung");
   
    SDCard s;
    s.setCapacity(32);
   
    m.setSDCard(s);
   
    cout<<"Price: "<<m.getPrice()<<endl;
    cout<<"Brand Name: "<<m.getBrandName()<<endl;
    cout<<"SD Card Capacity: "<<m.getSDCard().getCapacity()<<" GB"<<endl;
}


