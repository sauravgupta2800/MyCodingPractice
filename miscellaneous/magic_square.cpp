#include<bits/stdc++.h>
using namespace std;
/* Question Link:
https://www.geeksforgeeks.org/minimum-changes-needed-to-make-a-33-matrix-magic-square/
*/
/*
https://www.hackerrank.com/challenges/magic-square-forming/problem
*/
void generateSquare(int n)
{
    int magicSquare[n][n];

    //set all slots to 0
    memset(magicSquare, 0, sizeof(magicSquare));

    //_initilize
    int i=n/2;
    int j=n-1;

    //putting one by one all values
    for(int num=1;num<=n*n;)
    {
        if(i==-1 && j==n) //3 rd condition
        {
            j=n-2;
            i=0;
        }
        else
        {
            //wrap-up
            if(j==n)
                j=0;
            if(i==-1)
                i=n-1;
        }
        if(magicSquare[i][j]) // 2nd condition
        {
            j-=2;
            i++;
            continue;
        }
        else
        {
            magicSquare[i][j]=num++;
        }
        j++;i--;// 1st condition
    }

    //print the values
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<magicSquare[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n=3;
    generateSquare(n);
    return 0;
}
