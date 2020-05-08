#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int i;
    cin>>n;
    vector<int> v;
    int item;
    for(i=0;i<n;i++)
    {
        cin>>item;
        v.push_back(item);
    }

    for(i=0;i<n;i++)
    {
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
    int f_mini=0,f_maxi=0;
    for(i=0;i<n;i++)
    {
        if(mini==v[i])
            f_mini++;
        else if(maxi==v[i])
            f_maxi++;
    }
    
    cout<<n-(f_mini+f_maxi);
}
