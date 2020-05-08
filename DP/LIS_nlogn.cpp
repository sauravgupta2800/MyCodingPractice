#include<bits/stdc++.h>
using namespace std;
int LIS(vector<int> arr)
{
    vector<int> v;
    v.push_back(arr[0]);
    for(int k=1;k<arr.size();k++)
    {

        if(arr[k]>v[v.size()-1])
            v.push_back(arr[k]);
        else if(v[0]>arr[k])
            v[0]=arr[k];
        else
        {
            int l=0,h=v.size()-1;
            int item=arr[k];
            int pos=0;
            while(l<h)
            {
                //cout<<l<<" "<<h<<endl;
                int mid=(l+h)/2;
                if(v[mid]<  item && mid+1<v.size() && v[mid+1]>item)
                {
                    pos=mid+1;
                    v[pos]=arr[k];
                    break;
                }
                if(v[mid]==item)
                    break;
                if(item>v[mid])
                    l=mid+1;
                else
                    h=mid;
            }
        }
        cout<<"K: "<<arr[k]<<endl;
        for(int p=0;p<v.size();p++)
            cout<<v[p]<<" ";
        cout<<endl;
    }
    return v.size();
}

int main()
{
    vector<int> v={10,9,2,5,3,7,101,18};

    cout<<LIS(v)<<endl;
}
