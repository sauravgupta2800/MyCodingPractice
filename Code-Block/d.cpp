#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* f(int l,int r,vector<int> &pre, vector<int> &in,int &point)
{
    if(r<l)
    {
        return NULL;
    }
    TreeNode *root=new TreeNode(pre[point]);
    point++;
    if(r==l)
        return root;
    int pos=0;
    for(int k=l;k<=r;k++)
    {
        if(in[k]==root->val)
        {
            pos=k;
            break;
        }
    }
    root->left=f(l,pos-1,pre,in,point);
    root->right=f(pos+1,r,pre,in,point);
    return root;
}

void travel(TreeNode *n,vector<int> &v)
{
    if(!n)
        return ;
    travel(n->left,v);
    travel(n->right,v);
    v.push_back(n->val);
}
int solve(vector<int> &pre, vector<int> &in, vector<int> &post) {
    int point=0;
    int size=post.size();
    if(pre[0]!=post[size-1])
        return 0;
    TreeNode *n=f(0,pre.size()-1,pre,in,point);

    vector<int> v;
    travel(n,v);


    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=post[i])
            return 0;
        //cout<<v[i]<<" ";
    }
    return 1;
}

int main()
{
    vector<int> a={1,2,3};
    vector<int> b={2,1,3};
    vector<int> c={2,3,1};
    cout<<solve(a,b,c);
}
