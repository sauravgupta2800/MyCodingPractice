#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,20,5,4,44,2,21};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    stack<int> s;
    //memset(arr,-1,sizeof(arr));
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    s.push(arr[0]);
    for(i=1;i<n;i++)
    {
        /*if(s.empty())
        {
            s.push(arr[i]);
            continue;
        }*/
        while(!s.empty() && s.top()<arr[i])
        {
            cout<<s.top()<<"-> "<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while(!s.empty())
    {
        cout<<s.top()<<"-> "<<-1<<endl;
        s.pop();
    }
}
