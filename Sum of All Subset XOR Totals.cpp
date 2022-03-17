#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int subsetXORSum(vector<int>& nums)
    {
        int sum = 0;
        vector<int> tables(1, 0);
        for(auto& num : nums)
        {
            vector<int> this_xor_table;
            for(auto& t: tables)
            {
                this_xor_table.push_back(t ^ num);
            }
            tables.insert(tables.end(), this_xor_table.begin(), this_xor_table.end());
        }
        return accumulate(tables.begin(), tables.end(), sum);
    }
};

