#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    string res="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            continue;
        }
        else
        {
            res+=s[i];
        }
    }
    cout<<res;
}
