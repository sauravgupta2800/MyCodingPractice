#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    unordered_map<char,TrieNode*> children;
    int eow;
    int freq;
};

struct TrieNode *root=NULL;
void insert(TrieNode *root,string str)
{
    TrieNode *curr=root;
    for(int i=0;i<str.size();i++)
    {
        TrieNode *node=NULL;
        char ch=str[i];
        if(curr->children.find(ch)==curr->children.end())
        {
            node=new TrieNode();
            node->freq=1;
            curr->children[ch]=node;
            curr->eow=0;
        }
        else
        {
            node=curr->children.find(ch)->second;
            node->freq+=1;
            curr->eow=0;
        }
        curr=node;
    }
    curr->eow=1;
}
string find1(TrieNode *root,string str)
{
    TrieNode *curr=root;
    string res="";
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        res+=str[i];
        curr=curr->children.find(ch)->second;
        if(curr->freq==1)
            return res;
    }
}
int main()
{
    TrieNode *root=new TrieNode();
    root->freq=0;
    vector< string> v={"geeksgeeks", "geeksquiz", "geeksforgeeks"};
    for(int i=0;i<v.size();i++)
    {
        insert(root,v[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<find1(root,v[i])<<" ";
    }
}
