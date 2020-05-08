#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,pos=0,i,j,k,result=0;
    cin>>n>>r;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res[1001];
    memset(res,-1,sizeof(res));
    for(pos=0;pos<n;pos++)
    {
        if(arr[pos]==0)
            continue;
        else
        {
            for(j=max(0,pos-r+1);j<=min(n-1,pos+r-1);j++)
            {
                res[j]=max(res[j],pos);
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }*/
    //cout<<endl;
    pos=0;
    while(pos<n)
    {
        if(res[pos]==-1)
        {
            result=-1;
            break;
        }
        result+=1;
        pos=res[pos]+r;
        //cout<<"pos:"<<pos<<endl;
    }
    cout<<result<<endl;
}
