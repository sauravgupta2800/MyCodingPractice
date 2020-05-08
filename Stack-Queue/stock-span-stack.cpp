#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int price[n];
        for(i=0;i<n;i++)
        {
            cin>>price[i];
        }
        int coun[n];
        stack<int> s;
        memset(coun,1,sizeof(coun));
        s.push(0);
        for(i=1;i<n;i++)
        {
            if(!s.empty() && price[s.top()]<=price[i])
            {
                s.pop();
            }
            coun[i]=(s.empty())? (i+1) :(i-s.top());
            s.push(i);
        }
        for(i=0;i<n;i++)
        {
            cout<<coun[i]<<" ";
        }
        cout<<endl;
    }
}
