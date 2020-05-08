#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector< string > v;
        vector< vector<char> > c;
        string str;
        ll i,j,n,m;
        cin>>n>>m;
        ll matrix[n][m];
        memset(matrix,-1,sizeof(matrix[0][0])*n*m);

        for(i=0;i<n;i++)
        {
            cin>>str;
            v.push_back(str);
        }

        for(i=0;i<v.size();i++)
        {
            str=v[i];
            vector< char > row;
            for(j=0;j<str.size();j++)
            {
                if(str[j]=='#')
                {
                    matrix[i][j]=1;
                }
                row.push_back(str[j]);
            }
            c.push_back(row);
        }

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<m-1;j++)
            {
                if((c[i][j]=='#')||(c[i][j+1]=='#')||(c[i+1][j]=='#')||(c[i+1][j+1]=='#') )
                {
                    continue;
                }
                else
                {
                    matrix[i][j]=1;
                    matrix[i][j+1]=1;
                    matrix[i+1][j]=1;
                    matrix[i+1][j+1]=1;
                }
            }
        }
        bool output=true;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j]==-1)
                {
                    output=false;
                    break;
                }
            }
        }
        if(output)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        v.clear();
        c.clear();    
    }
}
