#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={0,1,1,0,1,2,1,2,0,0,2,0,1};
    int i=0;
    int n=v.size();
    int l=0,mid=0,h=n-1;
    while(mid<=h)
    {
        switch(v[mid])
        {
            case 0:swap(v[l++],v[mid++]);
            break;
            case 1:mid++;
            break;
            case 2:swap(v[mid],v[h--]);
            break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
