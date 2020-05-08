#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int price[n];
        for(i=0;i<n;i++)
        {
            cin>>price[i];
        }
        int coun[n];
        memset(coun,0,sizeof(coun));
        for(i=1;i<=n;i++)
        {
            for(j=n-i;(j>=0)&&price[j]<=price[n-i];j--)
            {
                coun[n-i]++;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<coun[i]<<" ";
        }
        cout<<endl;
    }
}
