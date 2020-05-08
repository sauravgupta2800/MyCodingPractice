#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4,8,12,16};
    int maxi=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            maxi=max(maxi,(v[i]&v[j]) );
        }
    }
    cout<<maxi<<endl;
}
