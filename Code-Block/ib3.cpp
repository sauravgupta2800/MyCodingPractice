#include<bits/stdc++.h>
 using namespace std;
bool isps(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}

void fun(int c,vector<int> v,vector<int> visited,int last_num,int &COUNT)
{
    if(c==v.size())
    {
        //cout<<"LLLLL\n";
        COUNT=COUNT+1;
        return;
    }
    for(int i=0;i<v.size();i++)
    {
        if(visited[i] || (i>0 && v[i]==v[i-1] && !visited[i-1]) || (last_num!=-1 && !isps(v[i]+last_num)))
            continue;
        visited[i]=1;
        fun(c+1,v,visited,v[i],COUNT);
        visited[i]=0;
    }
}

int main()
{
    vector<int> v={2,2,2};
    sort(v.begin(),v.end());
    int COUNT=0;
    vector<int> visited(v.size(),0);
    fun(0,v,visited,-1,COUNT);
    cout<<COUNT;
}
