#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int sum=0;
     int i=0;
        while( (x>0 || y>0) && i<n)
         {
            if(x>0 && y==0)
            {
                sum+=a[i];
            }
            else if(y>0 && x==0)
            {
                sum+=b[i];
            }
            else if(a[i]>=b[i])
            {
                sum+=a[i];
                x--;
            }
            else
            {
                sum+=b[i];
                y--;
            }
            i++;
        }
        cout<<sum<<endl;;
    }
}
