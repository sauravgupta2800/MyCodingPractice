#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v={5, -17, -100, -11};
    int n=v.size();
    int j;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            // here only -ve num be there
            if(v[i]<0)
            {
                continue;
            }
                j=i;
                while( j<n-1 && v[j]>0)
                {
                    j++;
                }
                int save=v[j];
                for(int k=j;k>i;k--)
                {
                    v[k]=v[k-1];
                   // cout<<k<<" "<<v[k]<<endl;
                }
                v[i]=save;
        }
        else
        {
            if(v[i]>=0)
            {
                continue;
            }
                j=i;
                while( j<n-1 && v[j]<0)
                {
                    j++;
                }
                int save=v[j];
                for(int k=j;k>i;k--)
                {
                    v[k]=v[k-1];
                   // cout<<k<<" "<<v[k]<<endl;
                }
                v[i]=save;
        }
       // cout<<v[i]<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
