#include<bits/stdc++.h>
using namespace std;

int findMinimumFromMs(int** arr, int** ms)
{
    int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=ms[i][j])
            {
                count++;
            }
        }
    }
    return count;
}

int findMinimum(int** arr)
{
    int ms[9][3][3] = {
            { { 8, 1, 6 }, { 3, 5, 7 }, { 4, 9, 2 } },
            { { 6, 1, 8 }, { 7, 5, 3 }, { 2, 9, 4 } },
            { { 4, 9, 2 }, { 3, 5, 7 }, { 8, 1, 6 } },
            { { 2, 9, 4 }, { 7, 5, 3 }, { 6, 1, 8 } },
            { { 8, 3, 4 }, { 1, 5, 9 }, { 6, 7, 2 } },
            { { 4, 3, 8 }, { 9, 5, 1 }, { 2, 7, 6 } },
            { { 6, 7, 2 }, { 1, 5, 9 }, { 8, 3, 4 } },
            { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } },
    };
    // If all the elements need to be changed,
    // there would be 9 changes, so we take the
    // max as 9
    int min = 9;
    for (int i = 0; i < 9; i++)
    {
        int x = findMinimumFromMs(arr, ms[i]);
        if (x < min)
            min = x;
    }
    return min;
}
int main()
{
    int arr[3][3] = { { 8, 5, 6 },{ 3, 8, 7 },{ 4, 9, 2 } };

    cout<<findMinimum(arr);
    return 0;
}


/*
There are 8 possible magic squares of 3*3 dimensions, which are

8 1 6
3 5 7
4 9 2

6 1 8
7 5 3
2 9 4

4 9 2
3 5 7
8 1 6

2 9 4
7 5 3
6 1 8

8 3 4
1 5 9
6 7 2

4 3 8
9 5 1
2 7 6

6 7 2
1 5 9
8 3 4

2 7 6
9 5 1
4 3 8
*/
