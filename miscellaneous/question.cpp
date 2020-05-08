#include<bits/stdc++.h>
using namespace std;
map <int,int> m;

int permutation(int sum,int n,int l,int sub,int add)
{
    if(l==n)
    {
        /*if(m.find(sum)==m.end())
            m[sum]++;*/

        //cout<<"sum: "<<sum<<"\n";
        return sum;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(m.find(sum-sub)==m.end())
            {
                m[permutation(sum-sub,n,l+1,sub,add)]++;
            }
            if(m.find(sum)==m.end())
            {
                m[permutation(sum,n,l+1,sub,add)]++;
            }
            if(m.find(sum+add)==m.end())
            {
                m[permutation(sum+add,n,l+1,sub,add)]++;
            }
            /*
            permutation(sum-sub,n,l+1,sub,add);
            permutation(sum,n,l+1,sub,add);
            permutation(sum+add,n,l+1,sub,add);
*/
            cout<<endl;
        }
    }
    return 0;
}
int main()
{
    /*ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        //cin.tie(NULL);
        int n,a,b;
        cin>>n>>a>>b;
        permutation(0,n,0,a,b);
        cout<<m.size()<<endl;
        m.clear();
    }
    */
    // sum,n,l,sub,add
    cout<<permutation(0,70,0,4,8)<<endl;

    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<" "<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<m.size();
}
