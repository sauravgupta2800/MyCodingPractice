#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int arr[5]={10,20,30,40,50},*p,i,j;
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    p=arr;
    for(int i=0;i<5;i++)
    {
        cout<<*p<<" ";
        p++;
        //cout<<*(arr+i)<<" ";
        //cout<<i[arr];
    }
    cout<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(*(m+i)+j)<<" ";
        }
    }
    */
    int *p[10],i;
    int (*ptr)[10];
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    *p=a;
    for(i=0;i<10;i++)
    {
        cout<<(*(*p+i));
    }

    ptr=&a;
}
