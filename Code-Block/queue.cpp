#include<bits/stdc++.h>
using namespace std;
void f()
{
    vector<int> v={1,2,3,4,33};
    int n=v.size();
    deque<int> q;
    deque<int> q2;
    int k=4;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && v[i]>v[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        //--------------------------------------//
        while(!q2.empty() && v[i]<v[q2.back()])
        {
            q2.pop_back();
        }
        q2.push_back(i);
    }
    int sum=0;
    for(int i=k;i<n;i++)
    {
        //cout<<v[q.front()]<<" ";
        int x=v[q.front()];
        if(q.front()<=(i-k))
            q.pop_front();
        while(!q.empty() && v[i]>v[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        //---------------------------------------//
        //cout<<v[q2.front()]<<" ";
        int y=v[q2.front()];
        if(q2.front()<=(i-k))
            q2.pop_front();
        while(!q2.empty() && v[i]<v[q2.back()])
        {
            q2.pop_back();
        }
        q2.push_back(i);
        //cout<<endl;
        sum+=(x+y);
    }
    sum+=v[q.front()]+v[q2.front()];
    cout<<sum<<endl;
    //cout<<v[q.front()];
    //-------------------------
    //cout<<v[q2.front()];
}

void fun()
{
    vector<int> v={35202, 26488, -6206, 19960, 1939, -3158, 6012, 20592, 27685, 30354, 2728, 20151, -3413, 34679, 10717, 7343, 25902, 38190, 19684, 38298, 30689, 37437, 37507, 15110, 32390, 29378, 21083};//{2, 5, -1, 7, -3, -1, -2};
    deque<int> q;
    int k=9;
    int n=v.size();
    for(int i=0;i<k;i++)
    {
        if(v[i]<0)
        {
            q.push_back(i);
        }
    }
    for(int i=k;i<n;i++)
    {
        if(!q.empty())
            cout<<v[q.front()]<<" ";
        else
            cout<<0<<" ";
        if(!q.empty() && q.front()<=(i-k))
        {
            q.pop_front();
        }
        if(v[i]<0)
        {
            q.push_back(i);
        }
    }
    if(!q.empty())
        cout<<v[q.front()]<<" ";
    else
        cout<<0;
}
bool isValid(int i,int j,vector< vector<int> > m)
{
    int row=m.size();
    int col=m[0].size();
    if( (i>=0) && (i<row) && (j>=0) && (j<col) && (m[i][j]==1))
        return 1;
    return 0;
}
int rottenoranges()
{
    vector< vector<int> > m={{2,1,0,2,1},{1,0,1,2,1},{1,0,0,2,1}};
    int row=m.size();
    int col=m[0].size();
    queue< pair<int,int> > q;
    // traverse and whole matrix store values with2 indexes
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(m[i][j]==2)
            {
                q.push(make_pair(i,j));
            }
        }
    }
    int count=-1;
    while(!q.empty())
    {
        int total_len=q.size();
        cout<<total_len<<endl;
        count++;
        while(total_len--)
        {
            auto curr=q.front();
            q.pop();
            int i=curr.first;
            int j=curr.second;
            if(isValid(i,j+1,m))
            {
                m[i][j+1]=2;
                q.push(make_pair(i,j+1));
            }
            if(isValid(i,j-1,m))
            {
                m[i][j-1]=2;
                q.push(make_pair(i,j-1));
            }
            if(isValid(i+1,j,m))
            {
                m[i+1][j]=2;
                q.push(make_pair(i+1,j));
            }
            if(isValid(i-1,j,m))
            {
                m[i-1][j]=2;
                q.push(make_pair(i-1,j));
            }

        }
        //--------------------------//
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(m[i][j]==1)
            {
               return -1;
            }
        }
    }
    return count;
}
int main()
{
    rottenoranges();
}
