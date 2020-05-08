#include<bits/stdc++.h>
using namespace std;

void replace(string &str,char a,char b)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==a)
        {
            str[i]=b;
        }
    }
    //cout<<str<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        if(m!=n)
        {
            cout<<"NO\n";
        }
        else
        {
            int in=0;
            for(int i=0;i<s1.size();i++)
            {
                if(s1==s2)
                {
                    cout<<"YES\n";
                    in=1;
                    break;
                }
                if(s1[i]!=s2[i])
                {
                    replace(s1,s1[i],s2[i]);
                }
            }
            if(s1!=s2)
            {
                cout<<"NO\n";
            }
            else if(n==0)
                cout<<"YES\n";
        }
    }
}
