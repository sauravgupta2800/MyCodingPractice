#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={96, 96, 7, 81, 2, 13};
    int i,j,sum=0,count=0,n=v.size();
    for(i=0;i<64;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if((v[j]&(1<<i)))
                count++;
        }
        sum+=(count*(n-count)*2);
    }
    cout<<sum;
}
