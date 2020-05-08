#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={0,2,3,1,4,5,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3,i;
    deque<int> dq(3);
    vector<int> ans;
    for(i=0;i<k;i++)
    {
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(;i<n;i++)
    {
        ans.push_back(arr[dq.front()]);
        //cout<<arr[dq.front()]<<endl;
        //check the range
        //front<=i-k
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();

        // put new element to its appropriate position
        while(!dq.empty() && arr[dq.back()]<=arr[i])
            dq.pop_back();

        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    //cout<<arr[dq.front()];

    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
