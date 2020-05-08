#include<bits/stdc++.h>
using namespace std;
int expand_around_center(string s,int i,int j)
{
    int count=0;
    while(i>=0 && j<=s.length()-1 && s[i]==s[j])
    {
        i--;j++;
    }
    return j-i-1;
}
int main()
{
    string s="banana";
    int n=s.length();
    int start=0,end=0;
    for(int i=0;i<n-1;i++)
    {
        int len=max(expand_around_center(s,i,i),expand_around_center(s,i,i+i));
        cout<<i<<" "<<len<<endl;
        if(len>(end-start))
        {
            start=i-(len-1)/2;
            end=i+len/2;
        }
    }
    cout<<s.substr(start,end);
}
