#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,7,5,12};//15
    int target=12;
    int n=v.size();
    int curr_sum=v[0];
    int i=0,j=0;
    int present=0;
    int s=0,e=0;
    int c=0;
    for(j=1;j<=n;j++)
    {
        //cout<<curr_sum<<endl;
        while(curr_sum>target && i<j)
        {

            curr_sum=curr_sum-v[i];
            i++;
            //cout<<curr_sum<<" in\n";
        }
        if(curr_sum==target)
        {
            /*s=i;
            e=j-1;
            present=1;
            break;*/
            c++;
        }
        if(i<n)
            curr_sum=curr_sum+v[j];
    }
    cout<<c<<endl;
    /*if(present)
        cout<<s<<" "<<e<<endl;
    else
        cout<<0<<endl;*/
}
