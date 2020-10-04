#include <string>
#include <vector>



using namespace std;




class Solution {
public:
    string tictactoe(vector<vector<int>>& moves)
    {
        int a = 0, b = 0, len = moves.size();
        vector<int> wincas = {7, 56, 448, 73, 146, 292, 273, 84};
        for(int i = 0; i < len; i++)
        {
            if((i & 1) == 1)
            {
                b ^= 1 << (3 * moves[i][0] + moves[i][1]);
            }else{
                a ^= 1 << (3 * moves[i][0] + moves[i][1]);
            }
        }
        for(int i: wincas)
        {
            if((a & i) == i)
            {
                return "A";
            }
            else if((b & i) == i)
            {
                return "B";
            }
        }
        return len == 9 ? "Draw" : "Pending";
    }
};