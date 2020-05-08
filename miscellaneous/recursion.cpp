#include<bits/stdc++.h>
using namespace std;

int recursion(vector< vector<int> > v,int i,int j,int row,int col)
{
    //termination condition
    if(i>=row || j>=col)
        return 0;
    if( (i==(row-1)) && (j==(col-1)))
        return 1;
    return recursion(v,i+v[i][j],j,row,col)||recursion(v,i,j+v[i][j],row,col);
}

int main()
{
    vector< vector<int> > v={{1,1,2,3},{3,2,1,1},{2,1,2,3}};
    int row=v.size();
    int col=v[0].size();
    cout<<recursion(v,0,0,row,col);
}
