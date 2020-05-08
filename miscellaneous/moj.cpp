#include<bits/stdc++.h>
using namespace std;
int findsubArray(int arr[], int k,int l,int n)
{

    int res = n + 1;

    for (int i = l; i < n; i++) {

        // Find minimum length product
        // beginning with arr[i].
        int curr_prod = 1;

        for (int j = i; j < n; j++) {
            curr_prod = curr_prod * arr[j];

            if (curr_prod % k == 0 && res
                                > (j - i + 1))
            {
                res = min(res, j - i + 1);
                break;
            }
        }
    }

    return (res == n + 1) ? 0 : res;
}
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            m[i][j]=findsubArray(array,k,i,j);
        }
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        (m[l-1][r]==0)?cout<<"-1 ":cout<<m[l-1][r]<<" ";
    }
}
