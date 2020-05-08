#include<bits/stdc++.h>
using namespace std;
long long fun(long long  n)
{
    return floor(((-1+sqrt(1+4*2*n))/2.0));
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin.tie(0);
        long long n;
        cin>>n;
        long long sum=0;
        long long mid_1=fun(n);
        bool finish=false;
        long long mod=100000;
        long long n_n=((mid_1)*(mid_1+1)/2);
        long long low=1,high=mid_1;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if((mid+n_n)==n)
            {
                cout<<(mid_1*mid)%mod <<endl;
                finish=true;
                break;
            }
            else if((mid+n_n)>n)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(finish==false)
            cout<<"-1"<<endl;
    }
    return 0;
}
