#include<bits/stdc++.h>
using namespace std;

stack < int > s1,s2;

void enqueue(int item)
{
    s1.push(item);
}

int dequeue()
{
    if(s1.empty() && s2.empty())
    {
        cout<<"Q is empty\n";
        return 0;
    }
    else
    {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        s2.pop();
        return x;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    cout<<dequeue()<<"\n";
    enqueue(30);
    enqueue(10);
    cout<<dequeue()<<"\n";
    cout<<dequeue()<<"\n";
    enqueue(40);
}
