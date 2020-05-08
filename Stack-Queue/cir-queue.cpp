#include<bits/stdc++.h>

using namespace std;

#define max 10
int q[max];
int head=0;
int tail=0;
void enqueue(int item)
{
    if(head+1==tail)
    {
        cout<<"overflow"<< '\n';
    }
    else
    {
        q[head]=item;
        if(head==(max-1))
            head=0;
        else
            head++;
    }
}

int dequeue()
{
    int item;
    if(head==tail)
    {
        cout<<"underglow";
        return 0;
    }
    else
    {
        item=q[tail];
        if(tail==(max-1))
        {
            tail=0;
        }
        else
        {
            tail++;
        }
        return item;
    }
}

int main()
{
    enqueue(4);
    enqueue(1);
    enqueue(3);
    cout<<dequeue()<<"\n";
    enqueue(4);
    cout<<dequeue()<<"\n";
}
