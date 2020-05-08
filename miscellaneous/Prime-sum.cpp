#include<bits/stdc++.h>
using namespace std;

int checkPrime(int n)
{
    int i;
    bool yes=false;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            yes=true;
            break;
        }
    }
    if(yes==false)
        return 1;
    else
        return 0;
}

int main()
{
    int i,j,n=16777214;
    vector<int> res;
    for(i = 2; i <= n/2; ++i)
    {
        // condition for i to be a prime number
        if (checkPrime(i) == 1)
        {
            // condition for n-i to be a prime number
            if (checkPrime(n-i) == 1)
            {
                res.push_back(i);
                res.push_back(n-i);
                // n = primeNumber1 + primeNumber2
                printf("%d = %d + %d\n", n, i, n - i);
                //flag = 1;
            }

        }
    }

}
