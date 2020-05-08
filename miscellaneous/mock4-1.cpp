#include<bits/stdc++.h>
using namespace std;
bool fun(vector<int> v)
{
    int n=v.size();
    if(n<13)
        return 0;
    int i=0,j=n-1,check=1;
    while(i<=j)
    {
        //cout<<v[i]<<" "<<v[j]<<endl;
        if(v[i]==check && v[j]==check)
        {
            if(v[i]!=v[j])
                return 0;
            else
            {
                if(v[i]!=v[i+1] || v[j-1]!=v[j])
                    check++;
            }
        }
        else
            return 0;
        i++;j--;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;//={1,2,3,4,5,6,8,6,5,4,3,2,1};//{1,2,3,4,4,5,6,6,6,7,6,6,6,5,4,4,3,2,1};//{1,2,3,4,5,6,8,6,5,4,3,2,1};
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        if(fun(v))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
