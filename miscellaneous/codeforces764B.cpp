#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int> v;
    int item;
    for(i=0;i<n;i++)
    {
        cin>>item;
        v.push_back(item);
    }
    i=0;
    while(i<=(n-i-1))
    {
        //even position(0 based indexing)
        if(i%2==0)
            swap(v[i],v[n-i-1]);
        i++;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
