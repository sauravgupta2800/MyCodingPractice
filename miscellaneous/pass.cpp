#include<bits/stdc++.h>
using namespace std;
void preprocess(int arr[], int n, vector<vector<int> >& cnt)
{
    int i, j;

    // Run a loop for each bit position from
    // 0 to 32.
    for (i = 0; i < 32; i++) {
        cnt[i][0] = 0;
        for (j = 0; j < n; j++) {
            if (j > 0) {

                // store previous count of 1s
                // for ith bit position.
                cnt[i][j] = cnt[i][j - 1];
            }

            // Check if ith bit for jth element
            // of array is set or not. If it is
            // set then increase count of 1 for
            // ith bit by 1.
            if (arr[j] & (1 << i))
                cnt[i][j]++;
        }
    }
}

int findXOR(int L, int R, const vector<vector<int> > cnt)
{

    // variable to store final answer.
    int ans = 0;

    // variable to store number of 1s for ith bit
    // in the range L to R.
    int noOfOnes;

    int i, j;

    // Find number of 1s for each bit position from 0
    // to 32.
    for (i = 0; i < 32; i++) {
        noOfOnes = cnt[i][R] - ((L > 0) ? cnt[i][L - 1] : 0);

        // If number of 1s are odd then in the result
        // ith bit will be set, i.e., 2^i will be present in
        // the result. Add 2^i in ans variable.
        if (noOfOnes & 1) {
            ans += (1 << i);
        }
    }

    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[n];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        vector<vector<int> > cnt(32, vector<int>(n));
        preprocess(arr, n, cnt);
        int m=INT_MIN;
        int l=0,r=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+3;j<n;j++)
            {
                int cc=findXOR(i,j,cnt);
                if(m<=cc)
                {
                    m=cc;
                    l=i+1,r=j+1;
                }
            }
        }
        cout<<l<<" "<<r<<" "<<m;
    }
}
