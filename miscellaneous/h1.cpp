#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n=5,k=4,item;
    //cin>>n>>k;
    vector<long long> v={3,5,6,11,10};
    long long i=0,j=n-1;
    /*for(i=0;i<n;i++)
    {
        cin>>item;
        v.push_back(item);
    }*/
    i=0;
    while(k--)
    {
        if(v[i]<=v[j])
            i++;
        else
            j--;
    }
    //cout<<"ij"<<i<<j<<endl;

    cout<<r<<endl;
}
