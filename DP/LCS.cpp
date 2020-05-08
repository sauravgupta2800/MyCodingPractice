#include<bits/stdc++.h>
using namespace std;

int* LCS(int *a,int *b,int m,int n,int* s)
{
    int L[m+1][n+1],index;
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                L[i][j]=0;
            else if(a[i-1]==b[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else
            {
            if(L[i-1][j]>L[i][j-1])
                    L[i][j]=L[i-1][j];
            else
                L[i][j]=L[i][j-1];
        }
        }
    }
    index= L[m][n];
    int ind=index;
    s=&ind;
    //array to store the LCS values
    int lcs[index];
    i=m;j=n;
    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            lcs[index-1]=a[i-1];
            i--;j--;index--;
        }
        else if(L[i-1][j]>L[i][j-1])
            i--;
        else
            j--;
    }
    return lcs;
}
int main()
{
    int a[]={1,2,3,4,1};
    int b[]={3,4,1,2,1,3};
    int *res;
    int size;
    res=LCS(a,b,5,6,&size);
    //cout<<size<<end;
    for(int i=0;i<3;i++)
    {
        cout<<res[i];
    }
    return 0;
}
