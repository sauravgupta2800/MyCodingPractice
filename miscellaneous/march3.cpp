#include<bits/stdc++.h>
using namespace std;
bool fun(string str)
{
    set<char> s;
    string res;
    for(int i=0;i<str.size();i++)
    {
        if(s.find(str[i])==s.end())
        {
            s.insert(str[i]);
        }
    }
    for(auto i:s)
    {
        res+=i;
    }
    if(res=="aeiou")
        return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            string a; cin>>a; v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                string res=v[i]+v[j];
                if(fun(res))
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
