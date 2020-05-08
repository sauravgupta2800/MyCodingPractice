#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=7,i=0,j=0,c=0;
    vector<vector<int>> res,v(n,vector<int>(n));
    vector<int> row;
    for(i=0;i<n;i++)
    {
        for(c=0;c<=i;c++)
        {
            if(i==c||c==0)
            {
                v[i][c]=1;
                row.push_back(1);
            }
            else
            {
                v[i][c]=v[i-1][c-1]+v[i-1][c];
                row.push_back(v[i][c]);
            }
        }
        res.push_back(row);
        row.clear();

    }
    for(i=0;i<res.size();i++)
    {
        for(j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}
