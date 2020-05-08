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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans[n];

        memset(ans,-1,sizeof(ans));
        int j=0;
        stack<int> s;
        s.push(arr[0]);
        for(int i=1;i<  n;i++)
        {
            if(s.empty())
            {
                s.push(arr[i]);
                continue;
            }
            while(!s.empty() && s.top()<arr[i])
            {
                //cout<<s.top()<<endl;
                ans[j]=arr[i];
                j++;
                s.pop();
            }
            s.push(arr[i]);
        }
        while(!s.empty() && s.top()<=arr[n-1])
        {
            //cout<<s.top()<<endl;
            ans[j]=arr[n-1];
            j++;
            s.pop();
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
