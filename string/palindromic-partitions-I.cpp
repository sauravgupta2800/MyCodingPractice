#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s)
{
    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        return 0;
    }
    return 1;
}
void fun(int i,string s,vector<string> tmp)
{
    if(i==s.size())
    {
        for(int k=0;k<tmp.size();k++)
        {
            cout<<tmp[k]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int j=i+1;j<=s.size();j++)
    {
        string str=s.substr(i,j-i);
        if(ispalindrome(str))
        {
            tmp.push_back(str);
            fun(j,s,tmp);
            tmp.pop_back();
        }
    }
}
int main()
{
    string s="banana";
    vector<string> v;
    vector< vector<string> > res;
    fun(0,s,v);
}
