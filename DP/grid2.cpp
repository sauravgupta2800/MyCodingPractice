#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector< string > v;
        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            v.push_back(x);
        }
        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<v[i].length();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }*/
        int dp1[n][n];
        int dp2[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(v[i][j]=='.')
                    dp1[i][j]=(j!=(n-1))?dp1[i][j+1]:1;
                else
                    dp1[i][j]=0;

                if(v[j][i]=='.')
                    dp2[j][i]=(j!=(n-1))?dp2[j+1][i]:1;
                else
                    dp2[j][i]=0;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( (dp1[i][j] && dp2[i][j])==1)
                    sum++;
            }
        }
        cout<<sum<<endl;    
    }

}
