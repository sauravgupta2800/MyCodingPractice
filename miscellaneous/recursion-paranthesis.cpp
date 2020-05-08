#include<bits/stdc++.h>
using namespace std;
void allparanthesis(int n,string str,int open,int close,vector<string> &res)
{
    if(str.length()==2*n)
    {
        res.push_back(str);
        //cout<<str<<"\n";
        return ;
    }
    if(open<n)
    {
        str+='(';
        allparanthesis(n,str,open+1,close,res);
        str.pop_back();
    }
    if(open>close)
    {
        str+=')';
        allparanthesis(n,str,open,close+1,res);
        str.pop_back();
    }
}

int main()
{
    int n=3;
    vector<string> res;
    allparanthesis(n,"",0,0,res);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<"\n";
    }
}
