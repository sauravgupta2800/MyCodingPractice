#include<bits/stdc++.h>
using namespace std;

int BinomailCoef(int n, int k)
{
    int C[n+1][k+1],i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(i,k);j++)
        {
            //base case
            if(j==0||j==i)
            {
                C[i][j]=1;
            }
            //Calc
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
    return C[n][k];
}
int main()
{
    cout<<BinomailCoef(4,3)<<endl;
}
