#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,4,5,6,1,3,9};
    int n=7;
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++)
    {
        if(arr[s.top()]>=arr[i])
            s.push(i);
        else
        {
            while( !s.empty() && arr[s.top()]<arr[i])
            {
                arr[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        arr[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
