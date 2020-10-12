#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;



class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles)
    {
        int x = 0;
        int y = 0;
        int dirs[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        int d = 1;
        unordered_map<int, unordered_set<int>> m;
        for(const auto obstacle: obstacles)
        {
            m[obstacle[0]].insert(obstacle[1]);
        }
        int res = 0;
        for(char c: commands)
        {
            if(c == -2)
            {
                d = (d - 1 + 4) % 4;
            }
            else if(c == -1)
            {
                d = (d + 1) % 4;
            }
            else{
                while(c--)
                {
                    int tx = x + dirs[d][0];
                    int ty = y + dirs[d][1];
                    if(m.count(tx) && m[tx].count(ty)) break;
                    x = tx;
                    y = ty;
                    res = max(res, x*x+y*y);
                }
            }
        }
        return res;
    }
};