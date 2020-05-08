#include<bits/stdc++.h>
using namespace std;
void fun(queue<int> q)
{
    ;
    q.push(1);
    while(!q.empty()&& q.front()< N)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x*10);
        q.push(x*10+1);
    }
}
int main()
{
    fun(1000    ,5);
}
