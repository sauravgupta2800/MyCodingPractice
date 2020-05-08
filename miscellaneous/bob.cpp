#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<unsigned long long,unsigned long long> m;
    long long n,item;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    long long max=0;
    long long value=0;
    for(auto i:m)
    {
        if(i.second>max)
        {
            value=i.first;
            max=i.second;
        }
    }
    cout<<value<<endl;
}
