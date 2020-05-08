#include<bits/stdc++.h>
using namespace std;
map <int,int> m;
bool isRepeat(int item)
{
    /*cout<<"\ninside\n";
    for(auto p=m.begin();p!=m.end();p++)
    {
        cout<<p->first<<" "<<p->second<<endl;
    }*/
    for(auto p=m.begin();p!=m.end();p++)
    {
        if(item==p->first)
        {
            if(p->second>0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //input ke time SI ans FI save kr lo;
        int i,n,SP,EP,SI=0,FI=0,sum=0;
        cin>>SP>>EP>>n;
        int path[n];//={1,2,4,6,7,9};
        int cost[n-1];//={2,2,4,5,6};
        for(i=0;i<n;i++)
        {
            cin>>path[i];
            m[path[i]]=0;
            if(SP==path[i])
                SI=i;
            if(EP==path[i])
                FI=i;
        }
        for(i=0;i<n-1;i++)
        {
            cin>>cost[i];
        }

        for(i=SI;i<FI;i++)
        {
            if(!isRepeat(path[i+1]))
            {
                sum+=cost[i];
                m[path[i]]++;
                //cout<<sum<<endl;
            }
            else
            {
                m[path[i]]++;
            }
        }
        cout<<sum<<endl;
        m.clear();    
    }
}
