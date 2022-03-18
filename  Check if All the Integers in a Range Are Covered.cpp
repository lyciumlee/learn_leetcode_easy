#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right)
    {
        unordered_set<int> tables;
        for(auto& one_range: ranges)
        {
            for(int i = max(left, one_range[0]); i <= min(right, one_range[1]); i++)
            {
                tables.insert(i);
            }
        }
        return tables.size() == (right - left + 1);
    }
};