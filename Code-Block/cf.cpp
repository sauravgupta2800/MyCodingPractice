#include<bits/stdc++.h>
using namespace std;
void f(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int row=A.size();
    int col=A[0].size();
    bool rowflag=false;
    bool colflag=false;
    for(int i=0;i<col;i++)
    {
        if(A[0][i]==0)
        {
            colflag=1;
            break;
        }
    }
    for(int i=0;i<row;i++)
    {
        if(A[i][0]==0)
        {
            rowflag=1;
            break;
        }
    }
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(A[i][j]==0)
            {
                A[0][j]=0;
                A[i][0]=0;
            }
        }
    }
    if(1)
    {
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(A[0][j]==0 || A[i][0]==0)
                {
                    A[i][j]=0;
                    cout<<A[i][j]<<endl;
                }
            }
        }
    }


    if(colflag==true)
    {
        for(int i=0;i<col;i++)
            A[0][i]=0;
    }
    if(rowflag==true)
    {
        for(int i=0;i<row;i++)
        {
            A[i][0]=0;
        }
    }
    cout<<"\n\n\n\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector< vector<int> > v={{0,0},{0,1}};
    f(v);
}
