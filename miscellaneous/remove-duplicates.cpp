#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={0,0,1,1,1,1,2,3,3};
    int i=0;
    int n=v.size();
    /*for(int j=0;j<v.size();j++)
    {
        if(v[i]!=v[j])
            i++;
        v[i]=v[j];
    }
    cout<<i+1;
    */
    int c=1;
    for(int j=1;j<n;j++)
    {
        if(v[i]!=v[j])
        {
            i++;
            c=1;
        }
        else if(v[i]==v[j] && (c==1))
        {
            i++;
            c++;
        }
        v[i]=v[j];
    }
    for(int l=0;l<i+1;l++)
        cout<<v[l]<<" ";
}
