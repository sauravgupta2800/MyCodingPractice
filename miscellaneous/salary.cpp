#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<map>
#include<cassert>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;++i)

int a[1111];

int main()
{
	//freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	int tests;
	cin>>tests;
	while(tests--)
    {
		int n;
        cin>>n;
		FOR(i,1,n)cin>>a[i];
		sort(a+1,a+n+1);
		int ans=0;
		FOR(i,1,n)ans+=a[i]-a[1];
		cout<<ans<<endl;
	}
}
