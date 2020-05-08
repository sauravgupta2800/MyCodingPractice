#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={-2,-3,-19,-4,-6};
    int baniya=0,chalu=INT_MIN,sub=0;
    int pos=0;
    int ans=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=0)
            pos=1;
        ans=max(ans,arr[i]);
    }
    if(pos==0)
    {
        cout<<ans<<endl;
        cout<<ans;
    }
    else
    {
        for(int i=0;i<arr.size();i++)
        {
            baniya+=arr[i];
            chalu=max(chalu,baniya);
            if(baniya<0)
                baniya=0;

            if(arr[i]>=0)
                sub+=arr[i];

        }
        cout<<chalu<<endl;
        cout<<sub;
    }
}
