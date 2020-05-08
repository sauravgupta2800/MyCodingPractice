#include<bits/stdc++.h>
using namespace std;

int fun(vector< vector<int> > v,int i,int j,int row,int col)
{
    //termination condition
    if(i>=row || j>=col || v[i][j]==-1)
        return 0;
    if( (i==(row-1)) && (j==(col-1)))
        return 1;
    int c1=0,c2=0;
    int ans1=0,ans2=0;
    for(c1=i+1;c1<=i+v[i][j];c1++)
    {
        ans1+=fun(v,c1,j,row,col);
    }
    for(c2=j+1;c2<=j+v[i][j];c2++)
    {
        ans2+=fun(v,i,c2,row,col);
    }
    if((ans1+ans2)>0)
    {
        return ans1+ans2;// Returns num of unique Solution to reach(m-1,n-1)
    }
    return 0;
}

int main()
{
    vector< vector<int> > v={{3,-1,-1,5,7},{-1,-1,-1,-1,-1},{2,1,-1,-1,-1},{-1,4,3,1,1}};
    int row=v.size();
    int col=v[0].size();
    cout<<fun(v,0,0,row,col);

}
