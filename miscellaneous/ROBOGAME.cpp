#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,move;
        string str;
        cin>>str;
        n=str.size();
        int track[n];
        bool result=false;
        memset(track,-1,sizeof(track));
        for(i=0;i<n;i++)
        {
            if(str[i]=='.')
            {
                continue;
            }
            else
            {
                move=int(str[i]-'0');
                //cout<<"move:"<<move<<endl;
                for(j=max(0,i-move);j<=min(n-1,i+move);j++)
                {
                    //cout<<"y"<<endl;
                    if(track[j]==1)
                    {
                        result=true;
                        break;
                    }
                    else
                        track[j]=1;
                }
            }
        }
        if(result==true)
            cout<<"unsafe\n";
        else
        {
            cout<<"safe\n";
        }
    }
}
