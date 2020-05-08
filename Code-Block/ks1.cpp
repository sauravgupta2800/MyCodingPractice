#include<bits/stdc++.h>
using namespace std;

int diff(vector<int> v)
{
    int maxi=0;
    for(int i=0;i<v.size();i++)
    {
        maxi=max(maxi,v[i]);
    }
    int res=0;
    for(int i=0;i<v.size();i++)
    {
        res+=abs(maxi-v[i]);
    }
    return res;
}
int result=INT_MAX;
void fun(int i,int stop,vector<int> v,vector<int> help)
{
    if(help.size()==stop)
    {
        /*for(int l=0;l<help.size();l++)
        {
            cout<<help[l]<<" ";
        }
        cout<<endl;*/
        //cout<<diff(help)<<endl;
        result=min(result,diff(help));
        return;
    }
    if(i>=v.size())
        return ;
    // take

    help.push_back(v[i]);
    fun(i+1,stop,v,help);

    //leave
    help.pop_back();
    fun(i+1,stop,v,help);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,q;
        cin>>n>>q;
        //memset(dp,0,sizeof(dp));
        vector<int> v;
        vector<int> help;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x; v.push_back(x);
        }
        fun(0,q,v,help);
        cout<<result<<endl;
        result=INT_MAX;
    }
}
