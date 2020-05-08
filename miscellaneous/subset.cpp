#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > res;
void printAll(vector<int> arr,vector<int> h,int size,int i,int N)
{
    if(i==N)
    {
        vector<int> t;
        for(int k=0;k<size;k++)
        {
            t.push_back(h[k]);
        }
        sort(t.begin(),t.end());
        res.push_back(t);
        t.clear();
        return;
    }
    printAll(arr,h,size,i+1,N);
    h[size]=arr[i];
    printAll(arr,h,size+1,i+1,N);
}
int main()
{
    vector<int> arr={3,2,1};
    vector<int> h(3);
    printAll(arr,h,0,0,3);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
