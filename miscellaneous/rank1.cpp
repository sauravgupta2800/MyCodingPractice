#include<bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
    ll n,k,i,j,l;
    cin>>n>>k;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll track[n];
    memset(track,-1,sizeof(track));
    for(i=0;i<n;i++)
    {
        for(j=max(0,i-k+1);j<=min(n,i+k-1);j++)
        {
            //already powered
            if(arr[i]==0)
            {
                continue;
            }
            else
            {
                track[j]=max(i+1,track[j]);
            }
        }
        /*for(l=0;l<n;l++)
        {
            cout<<track[l]<<" ";
        }
        cout<<endl;
        */
    }


    ll pos=0;
    ll result=0;
    while(pos<n)
    {
        if(track[pos]==-1)
        {
            result=-1;
            break;
        }
        result+=1;
        pos=track[pos]+k-1;
        //cout<<"pos:"<<pos<<endl;
    }
    cout<<result<<endl;
}
