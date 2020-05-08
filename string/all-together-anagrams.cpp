#include<bits/stdc++.h>
using namespace std;
int total(string s)
{
    int t=0;
    for(int i=0;i<s.length();i++)
        t+=s[i]-'a';
    return t;
}
int main()
{
    vector<string> v={"act","cat","tac","god","dog"};
    unordered_map<string,int> m;
    //sort(m.begin(),m.end());
    for(int i=0;i<v.size();i++)
    {
        sort(v[i].begin(),v[i].end());
        m[v[i]]++;
    }
    vector<int> res;
    for(auto i:m)
    {
        res.push_back(i.second);
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
}
