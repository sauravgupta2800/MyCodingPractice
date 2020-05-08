#include<bits/stdc++.h>
using namespace std;

int MAX=1000;
vector<int> nextGreaterInLeft(vector<int> a)
{
    int n=a.size();
    vector<int> left_index(n, 0);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
          while (!s.empty() && a[i] > a[s.top() - 1]) {
            int r = s.top();
            s.pop();
            left_index[r - 1] = i + 1;
        }
          s.push(i + 1);
    }
    return left_index;
}



vector<int> nextGreaterInRight(vector<int> a)
{
    int n=a.size();
    vector<int> right_index(n, 0);
    stack<int> s;
    for (int i = 0; i < n; ++i) {
          while (!s.empty() && a[i] > a[s.top() - 1]) {
            int r = s.top();
            s.pop();
            right_index[r - 1] = i + 1;
        }
          s.push(i + 1);
    }
    return right_index;
}

int LRProduct(vector<int> arr)
{
    int n=arr.size();
    vector<int> left = nextGreaterInLeft(arr);

    vector<int> right = nextGreaterInRight(arr);
    int ans = -1;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, ((left[i]%1000000007)*(right[i]%1000000007))%1000000007);
    }
    return ans;
}


int main()
{
    vector<int> arr = { 5,9,6,8,6,4,6,9,5,4,9 };
    cout << LRProduct(arr);
}
