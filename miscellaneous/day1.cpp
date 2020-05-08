#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"-1\n";
        return 0;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]<97||s1[i]>122)
        {
            cout<<"-1\n";
            return 0;
        }
        if(s2[i]<97||s2[i]>122)
        {
            cout<<"-1\n";
            return 0;
        }
        if(s1[i]<s2[i])
        {
            cout<<"-1\n";
            return 0;
        }
    }
    cout<<s2<<endl;

}
*/
typedef long long ll;
/*int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll going=1;
    for(ll i=0;i<n;i++){
        if(v[i]>=going) {going++;continue;}
    }
    cout<<going;
    return 0;
}
*/
/*int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int c=0;
    for(ll i=0;i<v.size()-1;i++)
    {
        if(v[i]<v[i+1])
            c++;
    }
    cout<<c<<endl;
}*/


/*
int main()
{
    int i,j,key,n;
    cin>>n;
    map<int,int> m;
    int c=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
        c=max(c,m[x]);
    }
    cout<<n-c<<endl;
    /*n=v.size();
    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        key=v[i];
        j=i-1;
        while(j-1!=-1&& j>=0 && v[j]<key && v[j]==v[j-1])
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
    int c=0;
    for(i=0;i<v.size()-1;i++)
    {
        if(v[i]<v[i+1])
            c++;
    }
}
*/

/*

*/

int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d\n",n/2);
    if (n%2==0){
        for(i=0;i<n/2-1;i++){
            printf("2 ");
        }
        printf("2\n");
    }
    if(n%2==1){
        for (i=0;i<n/2-1;i++){
            printf("2 ");
        }
        printf("3\n");
    }
    return 0;
}
