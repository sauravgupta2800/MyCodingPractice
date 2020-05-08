#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,m=INT_MIN,sum=0,res=0,k,q,m_sum=0;
    bool found=false;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m_sum+=arr[i];
        m=max(m,arr[i]);
    }
    cin>>q;
    while(q--)
    {
        cin>>k;
        if(m_sum<k)
        {
            cout<<"-1\n";
        }
        else
        {
            for(i=1;i<=m;i++)
            {
                sum=0;
                for(j=0;j<n;j++)
                {
                    if(arr[j]<i)
                    {
                        sum+=arr[j];
                    }
                    else
                    {
                        sum+=i;
                    }
                }
                if(sum>=k)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }

}
