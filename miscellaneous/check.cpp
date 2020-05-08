
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        string letters="aaaabccc";
        //cin>>letters;
        map<char, ll> frequency;
        map<char, ll>::iterator it;
        for(ll i=0; i<letters.size(); i++){
            if(frequency.find(letters[i])==frequency.end()){
                frequency[letters[i]]=1;
            }
            else{
                frequency[letters[i]]++;
            }


        }

        vector <ll> sequence;
        for(it=frequency.begin(); it!=frequency.end(); it++){
            sequence.push_back(it->second);
            cout<<it->first<<" "<<it->second<<endl;
        }
}
