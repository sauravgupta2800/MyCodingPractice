#include<bits/stdc++.h>
using namespace std;
void fun(int i,vector<int> v,vector<int> aux,int sum,int S)
{
    if(i==v.size())
    {
        if(sum==S)
        {
            for(int k=0;k<aux.size();k++)
                cout<<aux[k]<<" ";
            cout<<endl;
        }
    }
    //take
    aux.push_back(v[i]);
    fun(i+1,v,aux,sum+=v[i],S);
    //leave
    aux.pop_back();
    fun(i+1,v,aux,sum,S);
}
int main()
{
    vector<int> v={10,1,2,7,6,1,5};
    int S=8;
    sort(v.begin(),v.end());
    vector<int> aux;
    fun(0,v,aux,0,S);
}
