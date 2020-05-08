#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};//36 9+8+5+1
    int n=v.size(),k=30;
    int res=0;
    unordered_map<int , pair<int,int> > m;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m[v[i]+v[j]]={i,j};
        }
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum =v[i]+v[j];

            if(m.find(k-sum)!=m.end())
            {
                pair<int,int> p = m[k-sum];
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
                {
                    res=1;

                }
            }
        }
    }
}
