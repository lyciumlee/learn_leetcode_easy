#include <vector>
#include <string>


using namespace std;



class Solution {
public:
    bool exist(vector<vector<char>>& board, string word)
    {
        if(board.empty() || board[0].empty()) return false;
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(search(board, word, 0, i, j)) return true;
            }
        }
        return false;
    }
    bool search(vector<vector<char>>& board, string word, int index, int i, int j)
    {
        if(index == word.size()) return true;
        int m = board.size();
        int n = board[0].size();
        if(i < 0 || j < 0 || i >=m || j >= n || board[i][j] != word[index]) return false;
        char c = board[i][j];
        board[i][j] = '#';
        bool res = search(board, word, index + 1, i - 1, j) 
                 || search(board, word, index + 1, i + 1, j)
                 || search(board, word, index + 1, i, j - 1)
                 || search(board, word, index + 1, i, j + 1);
        board[i][j] = c;
        return res;
    }
};