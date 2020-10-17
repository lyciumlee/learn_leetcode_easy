#include <vector>
#include <string>


using namespace std;




class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S)
    {
        vector<vector<int>> res;
        int n = S.size(), start = 0;
        for (int i = 1; i <= n; ++i) {
            if (i < n && S[i] == S[start]) continue;
            if (i - start >= 3) res.push_back({start, i - 1});
            start = i;
        }
        return res;
    }
};