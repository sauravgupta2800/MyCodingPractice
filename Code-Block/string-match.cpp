#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt="AABAACAADAABAAABAA";
    string pat="AABA";
    int N=txt.size();
    int n=pat.size();
    int j=0;
    for(int i=0;i<=N-n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==n)
            cout<<"occured at: "<<i<<endl;
    }
}
