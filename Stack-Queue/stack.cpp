#include<bits/stdc++.h>

using namespace std;

#define max 100
int s[100];
int TOS=-1;

bool isempty()
{
    if(TOS==-1)
        return true;
    else
        return false;
}


void push(int item)
{
    TOS++;
    s[TOS]=item;
}

int pop()
{
    if(isempty())
    {
        cout<<"underflow\n";
        return 0;
    }
    else
    {
        TOS--;
        return s[TOS+1];
    }

}
int main()
{
    push(4);
    push(1);
    push(3);
    cout<<pop()<<endl;
    push(8);
    cout<<pop()<<endl;
    return 0;
}
