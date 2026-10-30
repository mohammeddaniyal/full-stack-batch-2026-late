#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> stk;

    for(int i=122;i>=97;i--)  stk.push(i);
    

    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }

    return 0;
}