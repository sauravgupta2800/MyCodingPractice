#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times;
    cin>>times;
    while(times--)
    {
        map< string, pair<int,int> > m;
        for(int z=0;z<12;z++)
        {
            string str,t1="";
            getline(cin,str);
            str+=" ";
            int n1,n2,num=0;
            bool in=0;
            int prev;
            int one=0;
            int two=0;
            int equal=0;
            int visited=0;
            string save;
            int aya=0;
            int diff;
            for(int i=0;i<str.size();i++)
            {
                if(str[i]=='v' && str[i+1]=='s')
                {
                    i+=2;
                    continue;
                }
                if(str[i]>='0' && str[i]<='9')
                {
                    num=num*10+str[i]-'0';
                    in=1;
                }
                else if(str[i]==' ')
                {
                    if(num>=0 && in==1)
                    {
                        if(visited)
                        {
                            diff=abs(prev-num);
                            if(num<prev)
                            {
                                one=1;
                            }
                            else if(prev<num)
                            {
                                two=2;
                            }
                            else
                            {
                                equal=1;
                            }
                        }
                        prev=num;
                        in=0;
                        num=0;
                        visited=1;
                    }
                    else if(t1!="")
                    {
                        if(aya==1)
                        {
                            if(one==1)
                            {
                                if(m.find(save)==m.end())
                                {
                                    m[save]=make_pair(diff,3);
                                    if(m.find(t1)==m.end())
                                        m[t1]=make_pair((-1*diff),0);
                                    else
                                        m.find(t1)->second.first+=(-1*diff);
                                }
                                else
                                {
                                    m.find(save)->second.first+=diff;
                                    m.find(save)->second.second+=3;
                                    if(m.find(t1)==m.end())
                                        m[t1]=make_pair((-1*diff),0);
                                    else
                                        m.find(t1)->second.first+=(-1*diff);
                                }
                            }
                            if(two==1)
                            {
                                if(m.find(t1)==m.end())
                                {
                                    m[t1]=make_pair(diff,3);
                                    if(m.find(save)==m.end())
                                        m[save]=make_pair(-diff,0);
                                    else
                                        m.find(save)->second.first+=(-1*diff);
                                }
                                else
                                {
                                    m.find(t1)->second.first+=diff;
                                    m.find(t1)->second.second+=3;
                                    if(m.find(save)==m.end())
                                        m[save]=make_pair((-1*diff),0);
                                    else
                                        m.find(save)->second.first+=(-1*diff);
                                }
                            }
                            if(equal==1)
                            {
                                if(m.find(t1)==m.end())
                                {
                                    m[t1]=make_pair(diff,1);
                                }
                                else
                                {
                                    m.find(t1)->second.second+=1;
                                }

                                if(m.find(save)==m.end())
                                {
                                    m[save]=make_pair(diff,1);
                                }
                                else
                                {
                                    m.find(save)->second.second+=1;
                                }
                            }
                        }
                        save=t1;
                        t1="";
                        aya=1;
                    }
                }
                else
                {
                    t1+=str[i];
                }
            }
        }
        vector<  pair<int,pair<int,string > > > v;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            //cout<<itr->first<<" "<<itr->second.first<<" "<<itr->second.second<<endl;
            v.push_back(make_pair(itr->second.second,make_pair(itr->second.first,itr->first)));
        }
        sort(v.begin(),v.end());
        int c=0;
        for(int i=v.size()-1;i>0;i--)
        {
            if(c<2)
            {
                if(v[i].first>v[i-1].first)
                {
                    cout<<v[i].second.second<<" ";
                    c++;
                }
                else if(v[i].first==v[i-1].first && v[i].second.first>=v[i-1].second.first)
                {
                    cout<<v[i].second.second<<" ";
                    c++;
                }
            }
        }
        cout<<endl;
    }
}
