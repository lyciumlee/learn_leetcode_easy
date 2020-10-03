#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
using namespace std;



class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes)
    {
        int res = 0;
        if(dominoes.size() < 2) return 0;
        map<vector<int>, int> map;
        for(auto &v: dominoes)
        {
            if(v[0] > v[1]) swap(v[0], v[1]);
            map[v]++;
        }
        for(auto v: map)
        {
            if(v.second > 1) res += v.second * (v.second - 1);
        }
        return res / 2;
    }
};