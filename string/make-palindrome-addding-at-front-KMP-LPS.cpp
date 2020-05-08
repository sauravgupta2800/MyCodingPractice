#include<bits/stdc++.h>
using namespace std;
int LPS(string s)
{
    int n=s.size();
    int q=0;
    int pi[n];
    pi[0]=0;
    int k=0;
    for(q=1;q<n;q++)
    {
        while(k>0 && s[k]!=s[q])
            k=pi[k-1];
        if(s[k]==s[q])
        k++;
        pi[q]=k;
    }
    return pi[n-1];
}
int main()
{
    string save,s="abcd";
    save=s;
    int len=s.size();
    reverse(s.begin(),s.end());
    int already_palindrome=LPS(save+"&"+s);
    int res=len-already_palindrome;
    string add;
    cout<<res<<endl;
    for(int i=len-1;i>=0;i--)
    {
        add+=save[i];
        res--;
        if(res==0)
            break;
    }
    cout<<add+save;
}
