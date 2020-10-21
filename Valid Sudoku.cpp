#include <vector>
#include <unordered_set>
#include <string>


using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        unordered_set<string> st;
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.') continue;
                string t = '(' + to_string(board[i][j]) + ')';
                string row = to_string(i) + t, col = t + to_string(j), cell = to_string(i / 3) + t + to_string(j / 3);
                if(st.count(row) || st.count(col) || st.count(cell)) return false;
                st.insert(row);
                st.insert(col);
                st.insert(cell);
            }
        }
        return true;
    }
};