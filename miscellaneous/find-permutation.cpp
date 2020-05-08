#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    string str="IIDDIIID";
    int i,j;
    vector<int> res;
    for(int i=1;i<=str.length();i++)
    {
        if(str[i-1]=='I')
        {
            s.push(i);
            while(!s.empty())
            {
                res.push_back(s.top());
                s.pop();
            }
        }
        else
        {
            s.push(i);
        }
    }
    s.push(str.length()+1);
    while(!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
