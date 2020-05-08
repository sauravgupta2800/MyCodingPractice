#include<bits/stdc++.h>
using namespace std;

bool issafe(vector< vector<int> > board, int row, int col)
{
    int i, j;
    int N=board.size();
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;

    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}
void print(vector< vector<int> > board,vector<vector<string> >  &ANS)
{
    vector<string> str;
    for(int i=0;i<board.size();i++)
    {
        string tmp="";
        for(int j=0;j<board[0].size();j++)
        {
            if(board[i][j])
            {
                tmp+='Q';
            }
            else
                tmp+='.';
        }

        str.push_back(tmp);
        tmp="";
    }
    ANS.push_back(str);
}
bool fun(vector< vector<int> > board, int col,vector<vector<string> >  &ANS)
{
    if(col==board.size())
    {
        print(board,ANS);
        return 1;
    }
    int res=0;
    for(int row=0;row<board.size();row++)
    {
        if(issafe(board,row,col))
        {
            board[row][col]=1;
            res=res|fun(board,col+1,ANS);
            board[row][col]=0;
        }
    }
    return res;
}
void help(int N,vector<vector<string> >  &ANS)
{
    vector< vector<int> > board(N, vector<int> (N,0));
    fun(board,0,ANS);
}
int main()
{
    vector<vector<string> >  ANS;
    help(4, ANS);
    cout<<ANS[0].size();
}
