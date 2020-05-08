#include<bits/stdc++.h>
using namespace std;
string fun(string s1,string s2)
{
    if(s1.size()==0)
        return s2;
    if(s2.size()==0)
        return s1;
    string res;
    int i=s1.size()-1;
    int j=s2.size()-1;
    int carry=0;
    while(i>=0 || j>=0 || carry>=1)
    {
        if(i>=0)
        {
            carry+=s1[i]-'0';
        }
        if(j>=0)
        {
            carry+=s2[j]-'0';
        }

        res+=(carry%2)+'0';
        carry=carry/2;
        i--;j--;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    cout<<fun("1011","1");
}
