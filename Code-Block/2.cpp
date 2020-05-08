#include<bits/stdc++.h>
using namespace std;
void fun()
{
     int m[4][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rs=0,re=3;
    int cs=0,ce=3;
    for(int i=0;i<=re;i++)
    {
        for(int j=0;j<=ce;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    while (rs<=re && cs<=ce)
    {
        // print first row
        for(int i=cs;i<=ce;i++)
            cout<<m[rs][i]<<" ";
        rs++;
        // print last col
        for(int i=rs;i<=re;i++)
            cout<<m[i][ce]<<" ";
        ce--;
        // printing last row
        for(int i=ce;i>=cs;i--)
            cout<<m[re][i]<<" ";
        re--;
        //printing first col
        for(int i=re;i>=rs;i--)
            cout<<m[i][cs]<<" ";
        cs++;
    }
}
int main()
{

   cout<<pow(2,1000);
}
