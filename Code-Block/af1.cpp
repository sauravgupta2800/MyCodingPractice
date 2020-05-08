#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void decToOctal(ll n)
{
    ll octalNum[10000];
    ll i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (ll j = i - 1; j >= 0; j--)
        cout << octalNum[j];
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        decToOctal(n);
    }
}
