#include<bits/stdc++.h>
using namespace std;
int matrix_median(vector<vector<int> >v)
{
    int mini=INT_MAX,maxi=INT_MIN;
    int col=v[0].size();
    int row=v.size();
    int final=(1+row*col)/2;
    for(int i=0;i<v.size();i++)
    {
        mini=min(mini,v[i][0]);
        maxi=max(maxi,v[i][col-1]);
    }
    while(mini<maxi)
    {
        int mid=(mini+maxi)/2;
        int c=0;
        for(int i=0;i<row;i++)
        {
            c+=upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();
        }
        if(c<final)
            mini=mid+1;
        else
            maxi=mid;
    }
    return mini;
}
int main()
{
    vector< vector<int> >v={{1,3,5},{2,6,9},{3,6,9}};
    cout<<matrix_median(v);
}
