#include<bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{

int t;
cin>>t;
while(t--)
{
    int i,j,n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int track[n+1];
    map<int,int> m;
    bool res=false;
    memset(track,-1,sizeof(track));
    for(i=1;i<=n;i++)
    {
        track[arr[i]]=1;
    }
    //cout<<endl;
    for(i=1;i<=n;i++)
    {
        if(track[i]==1)
        {
            //cout<<i<<" "<<arr[i]<<arr[arr[i]]<<endl;
            m[arr[arr[i]]]++;
            if(m[arr[arr[i]]]>1)
            {
                res=true;
                break;
            }
        }
    }
    if(res)
        cout<<"Truly Happy\n";
    else
        cout<<"Poor Chef\n";
    }
}
