#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
node* ROOT=NULL;
node* insert(node* n,int item)
{
    if(n==ROOT)
    {
        node* nd=new node;
        nd->data=item;
        nd->left=NULL;
        nd->right=NULL;
        return nd;
    }
    if(n->data>=item)
    {
        n->left=insert(n->left,item);
    }
    else
    {
        n->right=insert(n->right,item);
    }
    return n;
}
int count=0;
int countleafnodes(node* n)
{
    int c=0;
    if(n->left==NULL && n->right==NULL)
    {
        return 1;
    }
    if(n->left==NULL)
    {
        c=countleafnodes(n->right);
    }
    if(n->right==NULL)
    {
        c=countleafnodes(n->left);
    }
    else
    {
        c= countleafnodes(n->left)+countleafnodes(n->right);
    }
    return c;
}
int total_nodes(node* n)
{
    if(n==NULL)
        return 0;
    return 1+total_nodes(n->left)+total_nodes(n->right);
}
void PreorderTraversal(node* root)
{
    if(root==NULL)
        return;

    stack<node*> s;
    s.push(root);

    while(!s.empty())
    {
        node *n=s.top();
        cout<<n->data<<endl;
        s.pop();

        if(n->right)
        {
            s.push(n->right);
        }

        if(n->left)
        {
            s.push(n->left);
        }
    }
}

void InorderTraversal(node* root)
{
    if(root==NULL)
        return;
    stack<node*> s;
    node *curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }

        curr=s.top();
        s.pop();

        cout<<curr->data<<endl;
        curr=curr->right;
    }
}

void PostorderTraversal(node* root)
{
    vector<int> v;
    stack<node*> s,ans;
    s.push(root);
    while(!s.empty())
    {
        node* curr=s.top();
        ans.push(curr);
        s.pop();
        if(curr->right)
            s.push(curr->right);
        if(curr->left)
            s.push(curr->left);
    }
    while(!ans.empty())
    {
        node* curr=ans.top();
        ans.pop();
        cout<<curr->data<<endl;
        v.push_back(curr->data);
    }
}

void PostorderTraversal_Efficient(node* root)
{
    stack<node*> s;
    node *f=new node;
    f->data=1;
    s.push(f);
    do
    {
        while(root)
        {
            if(root->right)
                s.push(root->right);
            s.push(root);
            root=root->left;
        }
        root=s.top();
        s.pop();
        if(root->right && root->right==s.top())
        {
            // swap
            s.pop();
            s.push(root);
            root=root->right;
        }
        else
        {
            cout<<root->data<<endl;
            root=NULL;
        }
    }
    while(s.top()->data!=1);
}
void level_order_traversal(node* root)
{
    queue<node* > q;
    q.push(root);
    while(!q.empty())
    {
        node* curr=q.front();
        cout<<curr->data<<endl;
        q.pop();
        if(curr->left)
        {
            q.push(curr->left);
        }
        if(curr->right)
        {
            q.push(curr->right);
        }
    }
}

void flatten(node* root)
{
    if(root==NULL || root->right==NULL && root->left==NULL)
    {
        return;
    }
    if(root->left)
    {
        // we make left to right
        flatten(root->left);
        node* tmp=root->right;
        root->right=root->left;
        root->left=NULL;

        // put node->right at LOC
        // but first we have to find it
        node* pos=root->right;
        while(pos->right)
        {
            pos=pos->right;
        }
        pos->right=tmp;
    }
    flatten(root->right);
}

void height_iterative(node* root)
{
    queue<node* > q;
    q.push(root);
    int height=0;
    while(q.size())
    {
        int curr_size=q.size();
        while(curr_size--)
        {
            node* curr=q.front();
            q.pop();
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);

        }
        height++;
        cout<<height<<endl;
    }
}

void vertical_order_traversal2(node* root)
{
    map<int, vector<int> > m;
    int hd=0;
    queue< pair<node*,int> > q;
    q.push(make_pair(root,hd));
    while(!q.empty())
    {
        pair<node*,int> p = q.front();
        q.pop();
        node* curr = p.first;
        hd=p.second;
        //cout<<curr->data<<endl;
        m[hd].push_back(curr->data);
        if(curr->left)
            q.push(make_pair(curr->left,hd-1));
        if(curr->right)
            q.push(make_pair(curr->right,hd+1));
    }

    for(auto i=m.begin();i!=m.end();i++)
    {
        for(int j=0;j<i->second.size();j++)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }

}
void vertical_order_traversal(int hd,node* root,map<int, vector<int > > &m)
{
    if(root==NULL)
        return ;
    m[hd].push_back(root->data);
    vertical_order_traversal(hd-1,root->left,m);
    vertical_order_traversal(hd+1,root->right,m);
}

void printVerticalOrder(node* root)
{
    map<int,vector<int> > m;
    int hd=0;
    vertical_order_traversal(hd,root,m);
    for(auto i=m.begin();i!=m.end();i++)
    {
        for(int j=0;j<i->second.size();j++)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }
}
node* build(vector<int> pre,vector<int> in,int start,int end)
{
    static int index=0;
    if(start>end)
        return NULL;
    node* n=new node();
    n->data=pre[index++];
    n->left=NULL;
    n->right=NULL;
    if(start==end)
        return n;
    //find position in InorderTraversal
    int pos;
    for(int i=start;i<=end;i++)
    {
        if(n->data==in[i])
        {
            pos=i;
            break;
        }
    }
    n->left=build(pre,in,start,pos-1);
    n->right=build(pre,in,pos+1,end);
    return n;
}
node* buildTree(vector<int> pre,vector<int> in)
{
    return build(pre,in,0,pre.size()-1);
}

void path1(node* root,vector<int> v,int item,vector<int> &res)
{
    if(root==NULL)
        return;
    v.push_back(root->data);
    if(root->data==item)
    {
        res=v;
        return;
    }
    path1(root->left,v,item,res);
    path1(root->right,v,item,res);
}
void LCA(node* n)
{
    vector<int> v,res1,res2;
    path1(n,v,50,res1);
    path1(n,v,10,res2);
    for(int i=0;i<res1.size();i++)
        cout<<"\n"<<res1[i];
    cout<<"\n";
    for(int i=0;i<res2.size();i++)
        cout<<"\n"<<res2[i];

    int prev=res1[0];
    int i=0;
    while(i<(res1.size()) && i<(res2.size()))
    {
        if(res1[i]!=res2[i])
        {
            cout<<prev;
            break;
        }
        prev=res1[i];
        i++;
    }
}
node* LCS_efficient(node* root,int a,int b)
{
    if(root==NULL)
        return NULL;
    if(root->data==a||root->data==b)
    {
        return root;
    }
    node* l=LCS_efficient(root->left,a,b);
    node* r=LCS_efficient(root->right,a,b);
    if(l&&r)
        return root;
    return (l!=NULL)?l:r;
}
bool present(node* root,int item)
{
    if(root==NULL)
    {
        return 0;
    }
    return (root->data==item)||present(root->left,item)||present(root->right,item);
}
int main()
{
    node* n=NULL;
    n=insert(n,50);
    n=insert(n,30);
    n=insert(n,70);
    n=insert(n,10);
    n=insert(n,40);
    n=insert(n,60);
    n=insert(n,90);
    n=insert(n,35);

    InorderTraversal(n);
    //LCA(n);
    cout<<"\n"<<present(n,90);
    //cout<<"\t"<<LCS_efficient(n,35,60)->data<<"\t";

    //PostorderTraversal(n);

    //PostorderTraversal_Efficient(n);

    //flatten(n);

    //height_iterative(n);
    //printVerticalOrder(n);
    //vertical_order_traversal2(n);

    //level_order_traversal(n);

    //vector<int> pre={3,9,20,15,7},in={9,3,15,20,7};
    //node* root =buildTree(pre,in);
    //InorderTraversal(root);

    //cout<<"count is: "<<countleafnodes(n)<<endl;
    //cout<<"total node: "<<total_nodes(n);
}
