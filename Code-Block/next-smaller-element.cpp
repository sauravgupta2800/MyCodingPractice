#include<bits/stdc++.h>
using namespace std;
int maximum_area(vector<int> arr)
{
    int n=arr.size();
    int ns[n];
    int ps[n];
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++)
    {
        if(arr[s.top()]<=arr[i])
            s.push(i);
        else
        {
            while( !s.empty() && arr[s.top()]>arr[i])
            {
                ns[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        ns[s.top()]=n;
        s.pop();
    }
    /*for(int i=0;i<n;i++)
        cout<<ns[i]<<" ";
    cout<<endl;*/
    //--------------------------//
    s.push(0);
    for(int i=n-1;i>=0;i--)
    {
        if(arr[s.top()]<=arr[i])
            s.push(i);
        else
        {
            while( !s.empty() && arr[s.top()]>arr[i])
            {
                ps[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        ps[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<ps[i]<<" ";
    cout<<endl;
    /*int maxi=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]*(ns[i]-ps[i]-1));
    }
    return maxi;*/
    return 0;
}
void fun(vector<int> arr)
{
    int n=arr.size();

    vector<int> ns(n);
    stack<int> s;
    s.push(0);
    for(int i=n-1;i>=0;i--)
    {
        if(arr[s.top()]<=arr[i])
            s.push(i);
        else
        {
            while( !s.empty() && arr[s.top()]>arr[i])
            {
                ns[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        ns[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<ns[i]<<" ";
}
int main()
{
    vector<int> v={34, 35, 27, 42, 5, 28, 39, 20, 28 };
    fun(v);
}
