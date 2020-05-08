#include<bits/stdc++.h>
using namespace std;
const array<string,10> mp={{"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}};

void fun(int i,string num,string curr,vector<string> &res)
{
    if(i==num.size())
    {
        res.push_back(curr);
    }
    for(char c:mp[num[i]-'0'])
    {
        curr.push_back(c);
        fun(i+1,num,curr,res);
        curr.pop_back();
    }
}
int main()
{
    vector<string> res;
    fun(0,"234","",res);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
}
