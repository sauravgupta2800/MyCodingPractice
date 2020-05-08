#include<bits/stdc++.h>
using namespace std;
stack<int> data,mini;

//------------------push-----------------------
void push(int x)
{
    // when data stack is empty;
    if(data.empty())
    {
        data.push(x);
        mini.push(x);
    }
    else
    {
        data.push(x);
        // compare with existing min top;
        int min_top=mini.top();
        //mini.pop();
        if(x<min_top)
        {
            // push new element
            mini.push(x);
        }
        else
        {
            mini.push(min_top);
        }
    }
    return;
}

//-------------------------pop------------------
void pop()
{
    if(!data.empty())
    {
        data.pop();
        mini.pop();
    }
}
//------------------------top-----------------
int top()
{
    if(!data.empty())
        return data.top();
    return -1;
}

//---------------------getmin------------------------
int getmin()
{
    if(!data.empty())
        return mini.top();
    return -1;
}
int main()
{
    push(2);
    push(1);
    push(3);
    push(4);
    while(!data.empty())
    {
        cout<<top()<<" "<<getmin()<<endl;
        pop();
    }
}
