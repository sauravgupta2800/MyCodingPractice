#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    vector<int> v={2,5,77,84};
    int k=3;
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=v[i]*(n-i);
        v[i+1]-=v[i];
    }
    cout<<sum;
}
