#include<bits/stdc++.h>
using namespace std;
void PUSH_BOTTOM(stack<int> &s, int key)
{
    if(s.empty())
    {
        s.push(key);
        return;
    }
    else
    {
        int x=s.top();
        s.pop();
        PUSH_BOTTOM(s,key);
        s.push(x);
    }
}
void rev(stack<int> &s)
{
    if(s.empty())
        return;
    int x=s.top();
    s.pop();
    rev(s);
    PUSH_BOTTOM(s,x);
}
int main()
{
    stack<int> s,k,g;
    for(int i=0;i<5;i++)
    {
        s.push(i);
    }
    k=s;
    g=s;

    //PUSH_BOTTOM(s,100);
    rev(s);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
