#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int d=0;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int c1[26]={0},c2[26]={0};
        for(i=0;i<s1.size();i++)
        {
            c1[s1[i]-'a']++;
        }
        for(i=0;i<s2.size();i++)
        {
            c2[s2[i]-'a']++;
        }
        /*for(i=0;i<26;i++)
        {
            cout<<c1[i]<<c2[i]<<endl;
        }*/
        for(i=0;i<26;i++)
        {
            d+=abs(c1[i]-c2[i]);
        }
        cout<<d<<endl;
    }
}
