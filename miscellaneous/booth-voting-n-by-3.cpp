#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2, 2, 4, 4, 3, 6, 3, 6, 3, 6, 3, 6, 3, 6, 3, 6, 3, 6, 3, 6, 9, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int vote1=0,voter1=0,vote2=0,voter2=0,i,count1=0,count2=0;
    for(i=0;i<n;i++)
    {
        if(voter1==arr[i])
        {
            vote1++;
        }
        else if(voter2==arr[i])
        {
            vote2++;
        }
        else if(vote1==0)
        {
            vote1++;
            voter1=arr[i];
        }
        else if(vote2==0)
        {
            vote2++;
            voter2=arr[i];
        }
        else if(arr[i]!=voter1 && arr[i]!=voter2)
        {
            vote1--;
            vote2--;
        }
        //cout<<vote1<<voter1<<" "<<vote2<<voter2<<endl;
    }
    //now count the voter1 and voter2 occurances
    for(i=0;i<n;i++)
    {
        if(arr[i]==voter1)
            count1++;
        else if(arr[i]==voter2)
            count2++;
    }
    if(count1>n/3)
        cout<<voter1<<endl;
    else if(count2>n/3)
        cout<<voter2<<endl;
    else
        cout<<"-1"<<endl;
}
