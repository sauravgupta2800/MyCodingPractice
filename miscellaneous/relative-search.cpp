#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,i,item;
        cin>>n1>>n2;
        vector<int> a1;
        vector<int> a2;
        vector<int> res;
        for(i=0;i<n1;i++)
        {
            cin>>item;
            a1.push_back(item);
        }

        for(i=0;i<n2;i++)
        {
            cin>>item;
            a2.push_back(item);
        }

        map<int,int> mp;
        for(i=0;i<n1;i++)
        {
            mp[a1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            for(auto j=mp.begin();j!=mp.end();j++)
            {
                if(a2[i]==j->first)
                {
                    for(int k=0;k<j->second;k++)
                    {
                        res.push_back(a2[i]);
                    }
                    mp[j->first]=-1;
                }
            }
        }
        //unordered_map<int,int>:: iterator itr;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second!=-1)
            {
                for(int k=0;k<itr->second;k++)
                {
                    res.push_back(itr->first);
                }
            }
        }
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
