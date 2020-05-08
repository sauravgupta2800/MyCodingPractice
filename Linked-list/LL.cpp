#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
ListNode *start=NULL,*agla=NULL;

ListNode* createNode(int data)
{
    ListNode *l=new ListNode();
    l->val=data;
    l->next=NULL;
    return l;
}
ListNode* insert_node(int data)
{
    ListNode *n=createNode(data);
    if(start==NULL)
    {
        start=n;
        agla=start;
    }
    else
    {
        agla->next=n;
        agla=agla->next;
    }

    return start;
}
void print(ListNode *n)
{
    if(start==NULL)
    {
        cout<<"Not Possible\n";
    }
    else
    {
        while(n)
        {
            cout<<n->val<<"->";
            n=n->next;
        }
    }
    cout<<endl;
}
ListNode* merge(ListNode *h1, ListNode *h2)
{
    if (!h1)
        return h2;
    if (!h2)
        return h1;

    // start with the linked list
    // whose head data is the least
    if (h1->val < h2->val)
    {
        h1->next = merge(h1->next, h2);
        return h1;
    }
    else
    {
        h2->next = merge(h1, h2->next);
        return h2;
    }
}
void partition(ListNode *root,ListNode **front, ListNode **back)
{
    if(root==NULL || root->next==NULL)
    {
        *front=root;
        *back=NULL;
    }
    else
    {
        ListNode *slow=root;
        ListNode *fast=root->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        *front=root;
        *back=slow->next;
        slow->next=NULL;
    }
}
void merge_sort(ListNode **root)
{
    ListNode *head=*root;
    ListNode *a=NULL,*b=NULL;
    if(!head || !head->next)
        return ;
    partition(head,&a,&b);
    merge_sort(&a);
    merge_sort(&b);
    *root=merge(a,b);
    //print(*root);
}
ListNode* reverse(ListNode *root)
{
    ListNode *prev=NULL,*curr=root,*agla=NULL;
    while(curr)
    {
        agla=curr->next;
        curr->next=prev;
        prev=curr;
        curr=agla;
    }
    return prev;
}
void reverseLL(ListNode *root)
{
    if(!root)
        return;
    if(!root->next)
    {
        start=root;
        return;
    }
    reverseLL(root->next);
    root->next->next=root;
    root->next=NULL;
}
ListNode* removeKthfromend(ListNode *root,int k)
{
    int n=0;
    ListNode *tmp=root,*prev=root;
    while(tmp)
    {
        n++;
        tmp=tmp->next;
    }
    if(n==k)
    {
        root=root->next;
        return root;
    }
    tmp=root;
    for(int i=1;i<(n-k+1);i++)
    {
        prev=tmp;
        tmp=tmp->next;
    }
    prev->next=tmp->next;
    return root;
}
ListNode* sum(ListNode *l1, ListNode *l2,int *carry)
{
    if(!l1)
        return NULL;
    ListNode *curr=new ListNode();
    curr->next=sum(l1->next,l2->next,carry);
    int sum=l1->val+l2->val+(*carry);
    curr->val=sum%10;
    *carry=sum/10;
    cout<<curr->val<<endl;
    return curr;
}
int main()
{
    ListNode *n;
    n=insert_node(1);
    n=insert_node(2);
    n=insert_node(3);
    n=insert_node(4);
    n=insert_node(5);
    //n=removeKthfromend(n,3);
    //merge_sort(&n);
    // n=reverse(n);
    //reverseLL(n);
    int carry=0;
    n=sum(n,n,&carry);
    print(n);
}
