#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <limits.h>

using namespace std;


class Solution {
public:
    vector<int> shortestToChar(string S, char C)
    {
        const int n = S.size();
        vector<int> indices(2 * n);
        iota(indices.begin(), indices.begin() + n, 0);
        iota(indices.rbegin(), indices.rbegin() + n, 0);
        vector<int> res(n, INT_MAX);
        int index = -n;
        for(int i: indices)
        {
            if(S[i] == C) index = i;
            res[i] = min(res[i], abs(index - i));
        }
        return res;
    }
};