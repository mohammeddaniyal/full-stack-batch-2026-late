#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    for(int i=0;i<100;i++) vec.push_back(i+1);
    
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }

    return 0;
}