#include<bits/stdc++.h>
using namespace std;

struct Node{
    int info;
    Node* left;
    Node* right;
};
struct Node* ROOT=NULL;
struct Node* PAR=NULL;
struct Node* LOC=NULL;

void FIND(int item)
{
    Node *ptr=ROOT,*save=NULL;

    while(ptr!=NULL)
    {
        if(ptr->info==item)
        {
            LOC=ptr;
            PAR=save;
            return;
        }
        if(item < ptr->info)
        {
            save=ptr;
            ptr=ptr->left;
        }
        else
        {
            save=ptr;
            ptr=ptr->right;
        }
    }
    LOC=ptr;
    PAR=save;
    return;
}

Node* create_node(int item)
{
    Node* tmp=new Node();
    tmp->info=item;
    tmp->right=NULL;
    tmp->left=NULL;
    return tmp;
}

void INSERT(int item)
{
    FIND(item);

    if(LOC!=NULL)
    {
        cout<<"\nITEM ALREADY PRESENT\n";
    }
    else
    {
        Node *tmp=create_node(item);
        if(PAR==NULL)
        {
            // NO TREE EXISTS
            ROOT=tmp;
        }
        else
        {
            if(item < PAR->info)
                PAR->left=tmp;
            else
                PAR->right=tmp;
        }
    }
    return ;
}

Node* INSERT(Node* node,int item)
{
    if(node==NULL)
    {
        node=create_node(item);
    }
    else if(item <= node->info)
        node->left=INSERT(node->left,item);
    else
        node->right=INSERT(node->right,item);
    return node;
}

void INORDER(Node* ptr)
{
    if(ptr)
    {
        INORDER(ptr->left);
        cout<<ptr->info<<" ";
        INORDER(ptr->right);
    }
}

bool SEARCH(Node* n,int item)
{
    if(n==NULL)
        return 0;
    if(n->info==item)
        return true;
    else if(item < n->info)
        SEARCH(n->left,item);
    else
        SEARCH(n->right,item);
}


int FIND_HEIGHT(Node* n)
{
    if(n==NULL)
    {
        return -1;
    }
    return max(FIND_HEIGHT(n->left),FIND_HEIGHT(n->right))+1;
}
int main()
{
    INSERT(10);
    INSERT(14);
    INSERT(34);
    INSERT(70);
    INSERT(3);
    INSERT(53);

    cout<<endl;
    INORDER(ROOT);
    cout<<endl;

    Node *n=NULL;
    n=INSERT(n,1);
    n=INSERT(n,2);
    n=INSERT(n,4);
    n=INSERT(n,5);
    n=INSERT(n,8);
    n=INSERT(n,9);
    n=INSERT(n,3);
    n=INSERT(n,6);
    n=INSERT(n,7);
    cout<<endl;
    INORDER(n);
    cout<<endl;

    cout<<"Height is: ";
    cout<<FIND_HEIGHT(n)<<endl;
    cout<<SEARCH(n,1003)?"True":"False";

}
