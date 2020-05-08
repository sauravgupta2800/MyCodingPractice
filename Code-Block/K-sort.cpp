#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(int n)
{
    if(n==0 || n==1)
        return n;
    return n*f(n-1);
}
int main()
{
    vector<int> v={7, 8, 6, 4, 6};
    int n=v.size();
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            int diff=v[i]-v[j];
            int gap=(i-j-1);
            cout<<diff*pow(2,gap)<<endl;
            ans+=(diff)*pow(2,gap);
        }
        cout<<ans<<endl;
    }
}
