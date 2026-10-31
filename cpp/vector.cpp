#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    

    vec[0]=101;
    vec[1]=102;
    vec[2]=2034;

    cout<<vec[2]<<endl;








     for(int i=0;i<100;i++) vec.push_back(i+1);
    
     for(int i=0;i<vec.size();i++)
     {
         cout<<vec[i]<<endl;
     }

    return 0;
}