#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int x)
{
    // Initialize result
    int count = 0;

    // Count the number of iterations to
    // reach x = 0.
    while (x!=0)
    {
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));

        count++;
    }

    return count;
}

string int_array_to_string(int int_array[], int size_of_array) {
  ostringstream oss("");
  for (int temp = 0; temp < size_of_array; temp++)
    oss << int_array[temp];
  return oss.str();
}

int main()
{
    int N,Q,K,i;
    cin>>N>>Q>>K;
    int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    string query,s=int_array_to_string(arr,N);
    cin>>query;
    for(i=0;i<query.size();i++)
    {
        if(query[i]=='?')
        {
            //print ans
            unsigned long long value = std::bitset<64>(s).to_ullong();
            int ans=maxConsecutiveOnes(value);
            if(ans>K)
                cout<<K<<endl;
            else
                cout<<ans<<endl;
        }
        else if(query[i]=='!')
        {
            //rotate the array;
            std::rotate(s.begin(), s.begin()+s.size()-1, s.end());
        }
    }
}
