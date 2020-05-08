#include<bits/stdc++.h>
using namespace std;
string mul(string s1,string s2)
{
    vector<int> res(s1.size()+s2.size(),0);
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s2.size();j++)
        {
            res[i+j]+=(s1[i]-'0')*(s2[j]-'0');
            res[i+j+1]+=res[i+j]/10;
            res[i+j]%=10;
        }
    }

    while(res.size()!=1 && res.back()==0)
        res.pop_back();
    reverse(res.begin(),res.end());
    string ans;

    for(int i=0;i<res.size();i++)
     ans+=res[i]+'0';
     return ans;
}
int main()
{
    cout<<mul("2","3");
}
