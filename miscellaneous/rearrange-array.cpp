#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4, 0, 2, 1, 3 };
    int i;
    int n=v.size();
    for(i=0;i<n;i++)
    {
        v[v[i]%n]+=i*n;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]/n;
    }
}
