#include<bits/stdc++.h>
using namespace std;
vector<int> V[100];
void adjList(int u,int v)
{
    V[u].push_back(v);
    V[v].push_back(u);
}

int visited[1000];
void dfs(int node)
{
    visited[node]=1;
    cout<<node<<" ";
    for(int i=0;i<V[node].size();i++)
    {
        if(visited[ V[node][i] ]==0)
            dfs(V[node][i]);
    }
}
int main()
{
    int vertex=100;
    int edges;
    cin>>edges;
    vector<int> e;
    int start=0;
    for(int i=0;i<2*edges;i++)
    {
        visited[i]=0;// initialise visited with '0'
        int x;
        cin>>x;
        if(i==0)
            start=x;
        e.push_back(x);
    }
    for(int i=0;i<2*edges;i+=2)
    {
        int u,v;
        u=e[i];
        v=e[i+1];
        adjList(u,v);
    }
    dfs(start);


    /*

    // print adjacency list:

    for(int i=0;i<V1;i++)
    {
        cout<<i;
        for(int j=0;j<V[i].size();j++)
            cout<<"->"<<V[i][j];
        cout<<endl;
    }*/
}
