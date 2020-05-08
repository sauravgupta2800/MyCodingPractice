#include<bits/stdc++.h>
using namespace std;
//#define FOR(i,a,b) for(int i=a;i<=b;++i)

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        int loc,n,i;
        cin>>n;
        int arr[n+1];
        bool result=true;
        for(i=1;i<=n;i++)cin>>arr[i];
        if(1)
        {
            loc=n/2;
            int count=0,cmp=1;
            for(i=1;i<=loc+1;i++)
            {
                //cout<<arr[i]<<" ";
                if((arr[i]==cmp)&&(arr[n+1-i]==cmp))
                {
                    //cout<<arr[i]<<" "<<arr[n+1-i]<<endl;
                    if(arr[i+1]>cmp && arr[n+1-i-1]>cmp)
                    {
                        cmp++;
                    }
                    //count++;
                }
                else
                {
                    result=false;
                    break;
                }
            }
            if(result)
            {
                cout<<"yes\n";
            }
            else
            {
                cout<<"no\n";
            }

        }
        /*else
        {
            loc=n/2;
            if(arr[loc+1]!=7)
            {
                result=false;
            }
            else
            {
                for(i=1;i<=loc;i++)
                {
                    //cout<<arr[i]<<" ";
                    if(arr[i]!=arr[n+1-i])
                    {
                        //cout<<arr[i]<<" ";
                        result=false;
                        break;
                    }
                }
            }
            if(result)
            {
                cout<<"yes\n";
            }
            else
            {
                cout<<"no\n";
            }
        }*/
    }

}
