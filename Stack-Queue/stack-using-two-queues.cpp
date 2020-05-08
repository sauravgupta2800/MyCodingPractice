#include<bits/stdc++.h>
using namespace std;

queue <int> q1,q2;

void push(int x)
{
    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    //swap names
    queue<int> q = q1;
    q1=q2;
    q2=q;
}
int pop()
{
    if(q1.empty())
        return -1;
    else
    {
        int x=q1.front();
        q1.pop();
        return x;
    }
}

int main()
{
    push(1);
    push(2);
    cout<<pop()<<endl;
    push(3);
    cout<<pop()<<endl;
    push(4);
    push(5);
}
