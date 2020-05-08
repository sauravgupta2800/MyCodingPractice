#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v,int K)
{
    int n=v.size();
    int freq[K];
    for(int i=0;i<K;i++)
        freq[i]=0;
    for(int i=0;i<n;i++)
        freq[v[i]%K]++;
    int ans=0;
    ans+=(freq[0]*(freq[0]-1))/2;
    for(int i=1;i<=(K/2)&&i!=(K-i);i++)
    {
        ans+=freq[i]*freq[K-i];
    }
    if(K%2==0)
    {
        ans+=(freq[K/2]*(freq[K/2]-1))/2;
    }
    return ans;
}
int main()
{
    vector<int> v={5, 9, 36, 74, 52, 31, 42};
    int K = 3;
    cout<<fun(v,K);
}
