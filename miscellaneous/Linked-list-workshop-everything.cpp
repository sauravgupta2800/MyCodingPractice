#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *next;
};
node *start=NULL,*agla=NULL;
node* create_node(int v)
{
    node *t=new node;
    t->value=v;
    t->next=NULL;
    return t;
}
void insert_node(int v)
{
    node *t=create_node(v);
    if(start==NULL)
    {
        start=t;
        agla=t;
        return;
    }
    agla->next=t;
    agla=t;
    /*node *t1;
    t1=start;
    while(t1->next!=NULL)
    {
        t1=t1->next;
    }
    t1->next=t;*/
    return;
}

//printing create_node

void print_train()
{
    node *t=start;
    while(t!=NULL)
    {
        cout<<t->value<<" ";
        t=t->next;
    }
}
void delete_kth_end(int k)
{
    int SIZE=0;
    node *t=start;
    while(t!=NULL)
    {
        SIZE++;
        t=t->next;
    }
    //cout<<"SIZE: "<<SIZE;
    if(start==NULL)
        return;
    if(SIZE==1 && k==1)//delete only one node
    {
        start=NULL;
        return;
    }
    if((SIZE-k)==0 && start->next!=NULL)
    {
        //delete 1st
        node *p=start;
        start=start->next;
        delete(p);
        return;
    }
    if((SIZE-k)<0)
    {
        node *p=start;
        start=start->next;
        delete(p);
        return;
    }
    node *t1,*prev=NULL;
    t1=start;
    int c=0;
    int stop=SIZE-k+1;
    while(t1!=NULL)
    {
        c++;
        if(c==stop)
        {
            prev->next=t1->next;
            delete(t1);
            //cout<<"tr";
            break;
        }
        prev=t1;
        t1=t1->next;
    }
}
int isPalindrome()
{
    vector<int> v;
    node *p=start;
    while(p!=NULL)
    {
        v.push_back(p->value);
        p=p->next;
    }
    for(int i=0;i<v.size()/2;i++)
    {
        if(v[i]!=v[v.size()-i-1])
            return 0;
    }
    return 1;
}
void delete_duplicates()
{
    node *t=start;
    if(start==NULL)
        return;
    while(t->next!=NULL)
    {
        if(t->value==t->next->value)
        {
            node *tmp=t->next;
            delete(t->next);
            t->next=tmp->next;
        }
        else
        {
            t=t->next;
        }
    }
}
void delete_duplicates2()
{
    node *dummy = new node;
    dummy->next=start;
    node *prev=dummy;

    node *curr=start;
    while(curr!=NULL)
    {
        while(curr->next!=NULL && prev->next->value==curr->next->value)
        {
            curr=curr->next;
        }
        if(prev->next==curr)
        {
            prev=prev->next;
        }
        else
        {
            prev->next=curr->next;
        }
        curr=curr->next;
    }
    start=dummy->next;
}
int get_middle()
{
    node *slow=NULL,*fast=NULL;
    slow=start,fast=start;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->value;
}

void swap_in_pairs()
{
    node *curr=start,*prev=NULL;
    int c=0;
    while(curr!=NULL && curr->next!=NULL)
    {
        node *n1=curr->next;
        curr->next=curr->next->next;
        n1->next=curr;
        if(c==0)
        {
            start=n1;
        }
        else
        {
            prev->next=n1;
        }
        //update curr , prev
        prev=curr;
        curr=curr->next;
        c++;
    }

}
void reverseLL()
{
    node *prev=NULL;
    node *curr=start;
    while(curr!=NULL)
    {
        node *tmp=curr->next;
        curr->next=prev;
        //update prev and curr
        prev=curr;
        curr=tmp;
    }
    start=prev;
}

void ReorderList()
{
    int size=0;
    node *t=start;
    while(t!=NULL)
    {
        size++;
        t=t->next;
    }
    //cout<<size<<endl;
    if(size>2)
    {
        node *prev=NULL,*curr=start;
        for(int i=0;i<(size/2)+1;i++)
        {
            prev=curr;
            curr=curr->next;
            cout<<prev->value<<endl;
            cout<<curr->value<<endl;
            cout<<endl;
        }
        while(curr!=NULL)
        {
            node *tmp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmp;
        }
        node *p2=prev;
        node *p1=start;
        cout<<p2->value<<endl;

        // Now we have 2 pointers P1 and P2
        // Reorder statements are:

        while(p1!=p2 && p1->next!=p2)
        {
            node *tmp1=p1->next;
            p1->next=p2;

            node *tmp2=p2->next;
            p2->next=tmp1;

            p1=tmp1;
            p2=tmp2;
        }
        p2->next=NULL;
    }
}
bool palindrome_0_1_space()
{
    int size=0;
    node *p=start;
    while(p!=NULL)
    {
        size++;
        p=p->next;
    }
    if(size>=2)
    {
        int upto=(size/2);
        node *prev=NULL,*curr=start;
        while(upto--)
        {
            node *tmp=curr->next;
            curr->next=prev;

            prev=curr;
            curr=tmp;
        }
        /*cout<<prev->value;
        cout<<curr->value;
        cout<<endl;
        cout<<prev->next->value;
        cout<<curr->next->value;*/
        if(size%2!=0)
        {
            //odd case
            node *p1=prev;
            node *p2=curr->next;
            while(p1!=NULL || p2!=NULL)
            {
                //cout<<p1->value<<" "<<p2->value<<endl;
                if(p1->value!=p2->value)
                {
                    return 0;
                }
                p1=p1->next;
                p2=p2->next;
            }
        }
        else
        {
            //even case

            node *p1=prev;
            node *p2=curr;
            while(p1!=NULL || p2!=NULL)
            {
                //cout<<p1->value<<" "<<p2->value<<endl;
                if(p1->value!=p2->value)
                {
                    return 0;
                }
                p1=p1->next;
                p2=p2->next;
            }
        }

    }
    return 1;
}

void rotate_by_k_places(int k)
{
    int size=0;
    node *t=start,*save_head=start;
    while(t!=NULL)
    {
        size++;
        t=t->next;
    }
    if(start==NULL || k==0 || k==size)
        return;
    //cout<<size<<endl;
    int upto=size-k;
    node *curr=start,*prev=NULL;
    while(upto--)
    {
        prev=curr;
        curr=curr->next;
    }
    /*cout<<prev->value;
    cout<<curr->value;
    cout<<endl;*/

    prev->next=NULL;
    start=curr;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=save_head;
}

void ReverseLL2(int m,int n)
{
    int N=n,M=m;
    node *p1,*p2,*swap1,*swap2;
    if(m==1)
    {
        //handle this case separately
        p1=NULL;
        swap1=start;
    }
    else
    {
        node *c1=start,*prev=NULL;
        while(m>1)
        {
            prev=c1;
            c1=c1->next;
            m--;
        }
        p1=prev;
        swap1=c1;
    }
    //cout<<p1->value;
    //cout<<swap1->value;
    //cout<<endl;

    int upto=N-M;

    node *prev=swap1,*curr=swap1->next;
    while(upto>0 && curr!=NULL)
    {
        node *tmp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tmp;
        upto--;
    }
    p2=curr;
    swap2=prev;
    if(M==1)
    {
        swap1->next=p2;
        start=swap2;
    }
    else
    {
        p1->next=swap2;
        swap1->next=p2;
    }
}
void partitionList(int x)
{
    node *p1=NULL,*p2=NULL,*curr=start,*tmp=NULL,*head1,*head2;
    int c1=0,c2=0;
    while(curr)
    {
        //cout<<curr->value;
        tmp=curr->next;
        if(curr->value<x)
        {
            curr->next=NULL;
            if(c1==0)
            {
                p1=curr;
                head1=p1;
            }
            else
            {
                p1->next=curr;
                p1=p1->next;
            }
            c1++;
        }
        else
        {
            curr->next=NULL;
            if(c2==0)
            {
                p2=curr;
                head2=p2;
            }
            else
            {
                p2->next=curr;
                p2=p2->next;
            }
            c2++;
        }
        curr=tmp;
    }
    if(p1==NULL)
    {
        start=head2;
    }
    else if(p2==NULL)
    {
        start=head1;
    }
    else
    {
        p1->next=head2;
        start=head1;
    }
}
node *sorted_head=NULL;

void sorted_insert(node *n)
{
    if(sorted_head==NULL || sorted_head->value>=n->value)
    {
        n->next=sorted_head;
        sorted_head=n;
    }
    else
    {
        node *l=sorted_head;
        while(l->next && l->next->value < n->value)
        {
            l=l->next;
        }
        n->next=l->next;
        l->next=n;
    }
}
void insertion_sort()
{
    node *curr=start;
    while(curr!=NULL)
    {
        node *tmp=curr->next;
        curr->next=NULL;
        sorted_insert(curr);
        curr=tmp;
    }
    start=sorted_head;
}

int main()
{
    int n,k;
    /*cin>>n>>k;
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        insert_node(item);
    }
    delete_kth_end(k);
    */
    insert_node(1);
    //insert_node(1);
    insert_node(3);
    insert_node(2);
    insert_node(5);
    insert_node(2);

    //partitionList(2);

    //insert_node(16);

    print_train();

    //ReorderList();
    cout<<endl;

    insertion_sort();

    //cout<<palindrome_0_1_space();

    //rotate_by_k_places(8);

    //ReverseLL2(2,4);

    //delete_kth_end(3);

    //delete_duplicates2();

    //cout<<"middle is: "<<get_middle()<<endl;

    //swap_in_pairs();

    //reverseLL();

    print_train();

    //cout<<isPalindrome();
}
