#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *START=NULL;

node* createNode(int x)
{
    node *temp;
    temp=new node();
    temp->data=x;
    temp->next=NULL;
    return temp;
}

void insertBeg(int val)
{
    cout<<"h"<<endl;
    node *tmp;
    tmp=createNode(val);
    if(START==NULL)
    {
        START=tmp;
    }
    else
    {
        tmp->next=START;
        START=tmp;
    }
}
void insertEnd(int val)
{
    node *t,*tmp;
    t=createNode(val);
    if(START==NULL)
    {
        START=t;
    }
    else
    {
        tmp=START;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=t;
    }
}
void print()
{
    cout<<"i"<<endl;
    node *t=START;
    while(t)
    {
        cout<<"->"<<t->data;
        t=t->next;
    }
    cout<<endl;
}

int main()
{
    insertBeg(4);
    insertBeg(5);
    insertBeg(6);
    insertBeg(7);
    insertBeg(8);
    insertBeg(9);
    insertBeg(10);
    insertBeg(11);
    insertEnd(100);
    insertEnd(200);
    print();
}
