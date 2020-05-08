#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v) {
    long long n=v.size();
    if(n==2)
        return abs(v[1]-v[0]);
    int l[n];
    int r[n];
    l[0]=INT_MAX;
    sort(v.begin(),v.end());
    for(long long i=1;i<n;i++)
    {
        l[i]=min(l[i-1],v[i-1]);
    }
    r[n-1]=INT_MAX;
    for(long long i=n-2;i>=0;i--)
    {
        r[i]=min(r[i+1],v[i+1]);
    }

   vector<int> res;
    for(int i=0;i<n-1;i++)
    {
        res.push_back(r[i]-v[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        res.push_back(v[i]-l[i]);
    }
    return *min_element(res.begin(),res.end());
}

int main()
{
    vector<int> v{1,2,3,4,5};
    cout<<solve(v);
}
