#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,n;
        bool ans=0;
        bool res=1;
        cin>>x>>y>>k>>n;
        while(n--)
        {
            int p,c;
            cin>>p>>c;
            if(p>=(x-y)&&c<=k&&res)
            {
                ans=1;
                res=0;
            }
        }
        if(ans)
            cout<<"LuckyChef\n";
        else
            cout<<"UnluckyChef\n";
    }
}
