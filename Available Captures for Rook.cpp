#include <vector>
#include <utility>


using namespace std;


class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board)
    {
        const int N = 8;
        pair<int, int> pos;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(board[i][j] == 'R')
                {
                    pos.first = i;
                    pos.second = j;
                }
            }
        }
        int res = 0;
        for(int i = pos.first + 1; i < N; i++)
        {
            if(board[i][pos.second] == 'B')
            {
                break;
            }
            if(board[i][pos.second] == 'p')
            {
                res++;
                break;
            }
        }
        for(int i = pos.first - 1; i >= 0; i--)
        {
            if(board[i][pos.second] == 'B')
            {
                break;
            }
            if(board[i][pos.second] == 'p')
            {
                res++;
                break;
            }
        }
        for(int i = pos.second - 1; i >= 0; i--)
        {
            if(board[pos.first][i] == 'B')
            {
                break;
            }
            if(board[pos.first][i] == 'p')
            {
                res++;
                break;
            }
        }
        for(int i = pos.second + 1; i < N ; i++)
        {
            if(board[pos.first][i] == 'B')
            {
                break;
            }
            if(board[pos.first][i] == 'p')
            {
                res++;
                break;
            }
        }
        return res;
    }
};