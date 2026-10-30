#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
};
class Box: public Rectangle
{
    private:
        int height;
    public:
        
        void setHeight(int h){
            height = h;
        }
        
        int getHeight(){
            return height;
        }
};

int main()
{
    Rectangle r;
    r.setBreadth(5);
    r.setLength(10);
    cout<<"Length: "<<r.getLength()<<endl;
    cout<<"Breadth: "<<r.getBreadth()<<endl;
    Box b;
    b.setBreadth(5);
    b.setLength(10);
    b.setHeight(15);
    cout<<"Length: "<<b.getLength()<<endl;
    cout<<"Breadth: "<<b.getBreadth()<<endl;
    cout<<"Height: "<<b.getHeight()<<endl;
}