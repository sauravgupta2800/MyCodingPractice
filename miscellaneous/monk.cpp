#include<bits/stdc++.h>
using namespace std;
int set_bits(unsigned int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
bool cmp(int i,int j)
{
    if(i>j)
        return 1;
    return 0;
}
int main()
{
    int n=4,k=2;
    vector<int> res,v={6,1,2,0};
    for(int i=0;i<n;i++)
        res.push_back(set_bits(v[i]));
    /*for(int i=0;i<n;i++)
        cout<<res[i]<<" ";*/
    sort(res.begin(),res.end(),cmp);
    int sum=0;
    for(int i=0;i<k;i++)
        sum+=res[i];
    cout<<sum<<endl;
}
