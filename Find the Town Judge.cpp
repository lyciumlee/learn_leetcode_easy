#include <vector>


using namespace std;


class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust)
    {
        vector<int> g(N+1, 0);
        for(auto t: trust)
        {
            ++g[t[1]];
            --g[t[0]];
        }
        for(int i = 1; i<=N;i++)
        {
            if(g[i] == N - 1)
            {
                return i;
            }

        }
        return -1;
    }
};