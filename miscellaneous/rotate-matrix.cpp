#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> > v{ { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    //vector<vector<int> > v{{1}};
    int row=v.size();
    int col=v[0].size();
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

    //transpose
    for(i=0;i<row;i++)
    {
        for(j=i;j<col;j++)
        {
            swap(v[i][j],v[j][i]);
        }
        cout<<endl;
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

    //reverse rows;
    for(i=0;i<row;i++)
    {
        int k=col-1;
        for(j=0;j<col;j++)
        {
            if(j<k)
            {
                swap(v[i][j],v[i][k]);
                k--;
            }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

}
