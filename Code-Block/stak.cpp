#include<bits/stdc++.h>
using namespace std;
void nge(vector<int> v)
{
    stack<int> s;
    s.push(0);// we store index
    int n=v.size();
    vector<int> nge(n,0);
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<v[s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && v[i]>v[s.top()])
            {
                nge[s.top()]=v[i];
                //cout<<v[s.top()]<<" "<<v[i]<<endl;
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        nge[s.top()]=-1;
        //cout<<v[s.top()]<<" "<<-1<<endl;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<nge[i]<<" ";
}
void nse(vector<int> v)
{
    int n=v.size();
    stack<int> s;
    s.push(0);
    vector<int> nse(n);
    for(int i=1;i<n;i++)
    {
        if(v[i]>v[s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && v[i]<v[s.top()])
            {
                nse[s.top()]=v[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        nse[s.top()]=-1;
        //cout<<v[s.top()]<<" "<<-1<<endl;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<nse[i]<<" ";
}
void pse(vector<int> v)
{
    int n=v.size();
    stack<int> s;
    s.push(n-1);
    vector<int> nse(n);
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]>v[s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && v[i]<v[s.top()])
            {
                nse[s.top()]=v[i];
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        nse[s.top()]=-1;
        //cout<<v[s.top()]<<" "<<-1<<endl;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<nse[i]<<" ";
}
int laxicographic_smaller_distinct_string()
{
     string str="bcabc";
    stack<char> s;
    vector<int> inside(256,0);
    vector<int> freq(256,0);
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]]++;
    }
    int i=0;
    s.push(str[i]);
    inside[str[i]]=1;
    freq[str[i]]--;
    for(int i=1;i<str.size();i++)
    {
        freq[str[i]]--;
        if(inside[str[i]]==1)
            continue;
        while(!s.empty() && str[i]<s.top()&& freq[s.top()]>0)
        {
            inside[s.top()]=0;
            s.pop();
        }
        s.push(str[i]);
        inside[str[i]]=1;
    }
    string res="";
    while(!s.empty())
    {
        res+=s.top();
        s.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res;
}
bool isOperator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
        return 1;
    return 0;
}
bool f()
{
    stack<char> s;
    string str="(a+(a+b))";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            s.push('(');
        }
        else if(isOperator(str[i]))
        {
            s.push(str[i]);
        }
        else if(str[i]==')')
        {
            if(!s.empty() && !isOperator(s.top()))
            {
                return 1;
            }
            else
            {
                s.pop();
                s.pop();
            }
        }
    }
    return 0;
}
void directory_path()
{
    string str="/./.././ykt/xhp/nka/eyo/blr/emm/xxm/fuv/bjg/./qbd/./../pir/dhu/./../../wrm/grm/ach/jsy/dic/ggz/smq/mhl/./../yte/hou/ucd/vnn/fpf/cnb/ouf/hqq/upz/akr/./pzo/../llb/./tud/olc/zns/fiv/./eeu/fex/rhi/pnm/../../kke/./eng/bow/uvz/jmz/hwb/./././ids/dwj/aqu/erf/./koz/..";
    int n=str.size();
    stack<string> st;
    //st.push("/");
    string curr="";
    for(int i=0;i<n;i++)
    {
        if(str[i]=='/')
            continue;
        curr="";
        while(i<n && str[i]!='/')
        {
            curr+=str[i];
            i++;
        }
        if(curr=="..")
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
        else if(curr==".")
        {
            continue;
        }
        else if(curr.size()!=0)
        {
            st.push(curr);
        }

    }
    stack<string> s2;
    while(!st.empty())
    {
        s2.push(st.top());
        st.pop();
    }
    string res="";
    int n1=s2.size();
    if(s2.empty())
        res="/";
    while(!s2.empty())
    {
        string tmp=s2.top();
        if(s2.size()==n1)
        {
            n1--;
            res+="/"+tmp;
        }
        else
        {
            res+=tmp;
        }
        s2.pop();

    }
    cout<<res;

}
void pge()
{
    vector<int> v={100,80,60,70,60,75,85};
    int n=v.size();
    stack<int> s;
    s.push(n-1);
    vector<int> res(n);
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<v[s.top()])
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && v[i]>v[s.top()])
            {
                res[s.top()]=s.top()-i;
                s.pop();
            }
            s.push(i);
        }
    }
    while(!s.empty())
    {
        res[s.top()]=1;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
}
int main()
{
    pge();
}
