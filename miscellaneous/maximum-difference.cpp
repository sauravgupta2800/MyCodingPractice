#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min_num=arr[0],max_num=arr[0],sum=0,m=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(max_num<arr[i])
            {
                max_num=arr[i];
                sum=arr[i]-min_num;
            }
            if(min_num>=arr[i])
            {
                min_num=arr[i];
                max_num=arr[i];
            }
            m=max(m,sum);
        }
        if(m>0)
            cout<<m<<endl;
        else
            cout<<"-1"<<endl;
    }

}
