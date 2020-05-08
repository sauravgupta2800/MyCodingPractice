#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> v,int D)
{
    int n=v.size();
    for(int i=1;i<n;i++)
        if(abs(v[i-1]-v[i])>D)
            return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int step;
        cin>>n>>step;
        vector<int> v;
        //memset(arr,INT_MIN,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        isPossible(v,step)==1?cout<<"YES\n":cout<<"NO\n";
    }


}
