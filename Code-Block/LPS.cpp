#include<bits/stdc++.h>
using namespace std;
/*
int prefix(string str)
{
    int n=str.size();
    int i=1;
    int j=0;
    int LPS[n];
    LPS[0]=0;
    cout<<str<<endl;
    while(i<n)
    {
        //cout<<str[i]<<endl;
        if(str[i]==str[j])
        {
            LPS[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j>0)
            {
                j=LPS[j-1];
            }
            else
            {
                LPS[i]=0;
                i++;
            }
        }
    }

    return LPS[n-1];
}
string r(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}

string f(vector<string> &A) {
    string res="";
    int point=0;
    while(1)
    {
        char c=A[0][point];
       // cout<<A[0][point];
        for(int i=1;i<A.size();i++)
        {
            //cout<<A[i][point]<<" ";
            if(c!=A[i][point])
            {
                return res;
            }
        }
        //cout<<endl;
        res+=A[0][point];
        point++;
    }
}
*/
void rev(string &s,int i,int j)
{
    cout<<i<<" "<<j<<endl;
    for(int k=i;k<=j;k++)
        cout<<s[k];
    cout<<endl;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
void reverseWords(string &A) {
    int i=0;
    for(int j=0;j<A.size();j++)
    {
        if(A[j]==' ')
        {
            rev(A,i,j-1);
            i=j+1;
        }
    }
    rev(A,i,A.size()-1);
    rev(A,0,A.size()-1);
}

int solve(const string A, string B) {

    int pos=0;
    for(int i=0;i<B.size();i++)
    {
        if(B[pos]!=B[i])
        {
            pos++;
            B[pos]=B[i];
        }
    }
    if(A.size()!=(pos+1))
        return 0;
    for(int i=0;i<=pos;i++)
    {
        if(A[i]!=B[i])
            return 0;
    }
    return 1;
}

bool func(string s1,string s2)
{
    int n=s1.size();
    int m1=s2.size();
    if(m1!=n)
        return 0;
    map<char,char> m;
    for(int i=0;i<n;i++)
    {
        char c1=s1[i];
        char c2=s2[i];
        if(m.find(c1)==m.end() && m.find(c2)==m.end())
        {
            m[c1]=c2;
            m[c2]=c1;
            cout<<" C:"<<9;
        }
        else if(m.find(c2)==m.end() || m.find(c1)==m.end())
            return 0;
        else if(c1=!m.find(c2)->second || c2!=m.find(c1)->second)
            return 0;
    }
    return 1;
}




void funct()
{
    string s="1";
    vector<string> v;
    v.push_back("1");
    int times=5;
    while(times--)
    {
        string res="";
        for(int i=0;i<s.size();)
        {
            int j=i;
            int c=0;
            while(s[i]==s[j])
            {
                c++;
                j++;
            }
            res+=to_string(c)+s[i];
            i=j;
        }
        s=res;
        v.push_back(res);
    }
}



void f1(string str)
{
    int n=str.size();
    int vis[26];
    for(int i=0;i<26;i++)
        vis[i]=0;
    for(int i=0;i<n;i++)
    {

        (vis[str[i]-'a'])++;
    }


    for(int i=0;i<n;i++)
    {
        if(vis[str[i]-'a']==1)
        {
            cout<<str[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

void ff()
{
    string str="aabcbcdb";
    unordered_set<char> set;
    for(int i=0;i<str.size();i++)
    {
        set.insert(str[i]);
    }
    int total=set.size();
    int n=str.size();

    int temp[256]={0};
    for(int i=0;i<256;i++)
        temp[i]=0;

    int count=0;
    int start=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        temp[str[i]]++;
        if(temp[str[i]]==1)
        {
            count++;
        }
        if(count==total)
        {
            // can we remove some of the chars
            while(temp[str[start]]>1)
            {
                temp[str[start]]--;
                start++;

            }
            ans=min(ans,(i-start+1));
        }
    }
    cout<<ans;
}

void f5()
{
    string s1="ycfwkzaqqyaf",s2="cfwkzaqqy";
    // pre-process the s2
    int f[256];
    for(int i=0;i<256;i++)
        f[i]=0;
    int total=0;
    for(int i=0;i<s2.size();i++)
    {
         f[s2[i]]++;
        if(f[s2[i]]==1)
        {
            total++;
        }
    }
    //---------------------------------------//
    int temp[256];
    for(int i=0;i<256;i++)
        temp[i]=0;
    int start=0;
    int count=0;
    int ans=INT_MAX;
    int ind=0;
    for(int i=0;i<s1.size();i++)
    {
        temp[s1[i]]++;
        if(temp[s1[i]]==f[s1[i]])
        {
            count++;
        }
        if(count==total)
        {
            while(temp[s1[start]]>f[s1[start]])
            {
                temp[s1[start]]--;
                start++;
            }
            cout<<start;
            int curr=(i-start+1);
            if(ans>curr)
            {
                ans=curr;
                ind=start;
            }
        }
    }

    for(int i=ind;i<ind+ans;i++)
        cout<<s1[i];
    cout<<endl;
}


bool fun9(string A)
{
    int v[10];
    for(int i=0;i<=9;i++)
        v[i]=0;
    for(int i=0;i<A.size();i++)
    {
        v[A[i]-'0']++;
    }
    for(int i=0;i<9;i++)
        cout<<v[i]<<" ";
    int c=0;
    for(int i=104;i<=992;i+=8)
    {
        int num=i;
        int r=0;
        int c=0;
        while(num)
        {
            r=num%10;
            num=num/10;
            if(v[r])
            {  //v[r]--;
                c++;
            }
            cout<<"C:"<<i<<" "<<c<<endl;
        }
        if(c==3)
            return 1;
    }
    return 0;
}

void f11()
{
    string str="-(a+b+c)";
    stack<char> s;
    s.push('+');
    string res1="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+' ||str[i]=='-')
        {
            if(s.top()=='+')
            {
                res1+=str[i];
            }
            else
            {
                // toggle
                if(str[i]=='+')
                    res1+='-';
                else
                    res1+='+';
            }
        }
        else if(str[i]=='(')
        {
            s.push(res1[res1.size()-1]);
        }
        else if(str[i]==')')
        {
            s.pop();
        }
        else
        {
            res1+=str[i];
        }
    }
    cout<<res1<<endl;
}
string f12(string A, int B) {

    stack<pair<char,int>> s;
    int sum=0;
    for(int i=0;i<A.size();)
    {
        if(A[i]>'0' && A[i]<='9')
        {
            int curr=0;
            while(A[i]>='0' && A[i]<='9')
            {
                curr=curr*10+(A[i]-'0');
                i++;
            }
            sum=sum*curr;
        }
        else
        {
            sum++;
            s.push({A[i],sum});
            i++;
        }
    }
    string ch="";
    while(B && !s.empty())
    {
        auto p=s.top();
        ch=p.first;
        s.pop();
        B=B%p.second;
    }
    return ch;
}
string f13(string A, int B) {
    int n=A.size();
    int i=0,j;
    int len=0;
    int freq=0;
    int total=0;
    while(i<n)
    {
        j=i;
        len=0;
        freq=0;
        // count num of chars
        while(j<n && isalpha(A[j]))
        {
            len++;
            j++;
        }
        // count num of digit value
        while(j<n && isdigit(A[j]))
        {
            freq = freq * 10 + (A[j] - '0');
            j++;
        }
        total=freq*len;
        if(B>total)
        {
            B=B-total;
            i=j;
        }
        else
        {
            B--;
            B=B%len;
            string res="";
            res=A[i+B];
            return res;
        }
    }
}
int f111(string s)
{
    int n=s.size();
    int L[n];
    int R[n];

    L[0]=(s[0]=='1')?1:0;

    for(int i=1;i<n;i++)
    {
        if(s[i]=='1')
            L[i]=L[i-1]+1;
        else
            L[i]=0;
    }
    R[n-1]=(s[n-1]=='1')?1:0;

    for(int i=n-2;i>=0;i--)
    {
        if(s[i]=='1')
            R[i]=R[i+1]+1;
        else
            R[i]=0;
    }
    //#----------------------------------#
   /* for(int i=0;i<n;i++)
    {
        cout<<L[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<R[i]<<" ";
    }
    cout<<endl;*/
    //#-----------------------------------#
    int co=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            co++;
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        if( s[i]=='0')
        {
            int left=((i-1)>=0)?L[i-1]:0;
            int right=((i+1)<n)?R[i+1]:0;
            //cout<<left<<" "<<right<<" "<<co<<endl;
            if((left+right)==co)
            {
                res=max(res,left+right);
            }
            else if((left+right)<co)
            {
                res=max(res,left+right+1);
            }
        }
    }
    return res;
}
int main()
{

    cout<<f111("01");
}
