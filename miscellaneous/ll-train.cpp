#include<bits/stdc++.h>
using namespace std;
struct train{
    int seats;
    int windows;
    train *next;
};
train *start=NULL;
train* create_node(int s,int w)
{
    train *t=new train;
    t->seats=s;
    t->windows=w;
    t->next=NULL;
    return t;
}
void insert_node(int s,int w)
{
    train *t=create_node(s,w);
    if(start==NULL)
    {
        start=t;
        return;
    }
    train *t1;
    t1=start;
    while(t1->next!=NULL)
    {
        t1=t1->next;
    }
    t1->next=t;
    return;
}

//printing create_node
void print_train()
{
    train *t=start;
    while(t!=NULL)
    {
        cout<<t->seats<<" "<<t->windows<<"\n";
        t=t->next;
    }
}

void insert_loc(int s,int w,int pos)
{
    train *t=start;
    int count=1;
    if(start==NULL)
    {
        train *t1=create_node(s,w);
        start=t;
        return;
    }
    if(pos==1)
    {
        train *t1=create_node(s,w);
        t1->next=start;
        start=t1;
        return;
    }
    while(t->next!=NULL)
    {
        //t=t->next;
        count++;
        if(count==pos)
        {
            train *t1=create_node(s,w);
            t1->next=t->next;
            t->next=t1;
            return ;
        }
        t=t->next;
    }
}
void get_middle()
{
    if(!start)
    {
        cout<<"empty\n";
        return;
    }
    train *slow=start,*fast=start;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"middle is: "<<slow->seats<<endl;
    return;
}
int main()
{
    insert_node(1,10);
    insert_node(2,20);
    insert_node(3,30);
    insert_node(4,40);
    insert_node(5,50);
    insert_node(6,60);
    print_train();
    cout<<endl;
    insert_loc(7,70,2);

    print_train();

    get_middle();
}
