#include<bits/stdc++.h>
using namespace std;

void push_down(stack<int> &s,int item)
{
    if(s.empty())
    {
        s.push(item);
        return ;
    }
    int element=s.top();
    s.pop();
    push_down(s,item);
    s.push(element);
}

void reverse(stack<int> &s)
{
    if(!s.empty())
    {
        int element=s.top();
        s.pop();
        reverse(s);
        push_down(s,element);
    }
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
