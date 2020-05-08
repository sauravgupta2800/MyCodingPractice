#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long mod=1000000007;
ll p(ll n,ll r)
{
    if(r==0)
        return 1;
    if(r==1)
        return n;
    ll ans=p(n,r/2);
    ll mul=((ans%mod)*(ans%mod))%mod;
    if(r%2==0)
    {
        return mul;
    }
    else
        return ((n%mod)*(mul%mod))%mod;
}
ll reverse(ll n)
{
    ll rev=0;
    ll r=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    return rev;
}
void fun(int i,string str,vector< string > &res)
{
    if(i==str.size())
    {
        res.push_back(str);
        return;
    }
    for(int j=i;j<str.size();j++)
    {
        swap(str[j],str[i]);
        fun(i+1,str,res);
        swap(str[j],str[i]);
    }
}

vector<string> N={"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void f(int i,vector<int> v,string curr)
{
    if(i==v.size())
    {
        cout<<curr<<" ";
        return;
    }
    for( char c: N[v[i]])
    {
        curr.push_back(c);
        f(i+1,v,curr);
        curr.pop_back();
    }
}
void f (int n)
{
  if (n <=1)  {
   printf ("%d", n);
  }
  else {
   f (n/2);
   printf ("%d", n%2);
  }
}
int Bsearch(int N)
{
   int beg=1;
   int end=N/2;
   while(beg<=end)
   {
       int mid=(beg+end)/2;
       if(mid*mid==N)
       {
           return mid;
       }
       if(mid*mid>N)
            end=mid-1;
       else
            beg=mid+1;
   }
   return end;
}

int rec(int N)
{
    if(N==1)
        return 0;
    int x=INT_MAX;
    int y=INT_MAX;
    if(N%2==0)
        x=1+rec(N/2);
    else
        y=1+min(rec(N+1),rec(N-1));
    return min(x,y);
}
int main()
{
    int N=13;
   int number_of_bits=floor(log2(N))+1;
   cout<<"bits are: "<<number_of_bits<<endl;
   if(number_of_bits%2!=0)
   {
       N=(N^(1<<(number_of_bits/2)));
       cout<<N<<endl;
   }
   else
   {
       N=(N^(1<<(number_of_bits/2)));
       N=(N^(1<<((number_of_bits-1)/2)));
       cout<<N<<endl;
   }
}
