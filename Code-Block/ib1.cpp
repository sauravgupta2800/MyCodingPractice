#include<bits/stdc++.h>
using namespace std;

bool issafe(vector< vector<int> > v,int i,int j)
{
    int row=v.size();
    int col=v[0].size();

    if(i<0 || i>=row || j<0 || j>=col)
        return 0;
    if(v[i][j]==-1 || v[i][j]==1)
        return 0;
    if(i>=0 && i<row)
        return 1;
    if(j>=0 && j<col)
        return 1;
    return 0;
}

int fun(int i,  int j,  int hops,   int z,  vector< vector<int> > visited,  vector< vector<int> > v)
{
    if(v[i][j]==2)
    {
        //cout<<"HOPES: "<<hops<<endl;
        return (hops==(z+1))?1:0;
    }
    int sum=0;
    //move all four directions on by one
    if(issafe(v,i,j+1) && visited[i][j+1]==0)
    {
        //cout<<i<<" "<<j+1<<endl;
        visited[i][j+1]=1;
        sum+=fun(i,j+1,hops+1,z,visited,v);
        visited[i][j+1]=0;
    }
    if(issafe(v,i,j-1) && visited[i][j-1]==0)
    {
        //cout<<i<<" "<<j-1<<endl;
        visited[i][j-1]=1;
        sum+=fun(i,j-1,hops+1,z,visited,v);
        visited[i][j-1]=0;
    }
    if(issafe(v,i+1,j) && visited[i+1][j]==0)
    {
        //cout<<i+1<<" "<<j<<endl;
        visited[i+1][j]=1;
        sum+=fun(i+1,j,hops+1,z,visited,v);
        visited[i+1][j]=0;
    }
    if(issafe(v,i-1,j) && visited[i-1][j]==0)
    {
       // cout<<i-1<<" "<<j<<endl;
        visited[i-1][j]=1;
        sum+=fun(i-1,j,hops+1,z,visited,v);
        visited[i-1][j]=0;
    }
    return sum;
}


int essential(vector< vector<int> > v)
{
    int row=v.size();
    int col=v[0].size();

    vector< vector<int> > visited(row, vector<int> (col,0));

    int a=0,b=0;
    int z=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //cout<<v[i][j]<<" ";
            if(v[i][j]==1)
            {
                a=i;
                b=j;
            }
            if(v[i][j]==0)
                z++;
        }
       // cout<<endl;
    }
   // cout<<z<<endl;
    //fun(int i,int j,int hops,int z,visited[row][col],vector< vector<int> > v)
    return fun(a,b,0,z,visited,v);

}
int main()
{
    vector< vector<int> > v={{0,1},{2,0}};
    cout<<essential(v);
}
