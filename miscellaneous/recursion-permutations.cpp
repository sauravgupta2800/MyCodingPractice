#include<bits/stdc++.h>
using namespace std;

void permutation(int i,string str,int N)
{
    if(i==N)
    {
        cout<<str<<"\n";
        return;
    }
    for(int k=i;k<N;k++)
    {
        swap(str[k],str[i]);
        permutation(i+1,str,N);
    }
}

void permutation_int(int i,vector<int> v,int N,vector< vector<int> > &res)
{
    if(i==N)
    {
        res.push_back(v);
        return;
    }
    for(int k=i;k<N;k++)
    {
        swap(v[k],v[i]);
        permutation_int(i+1,v,N,res);
    }
}

int main()
{
    vector< vector<int> > res;
    vector<int> v={1,2,3};
    permutation_int(0,v,v.size(),res);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
