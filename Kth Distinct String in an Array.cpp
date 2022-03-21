#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k)
    {
        unordered_map<string, int> tables;
        for(auto& one : arr)
        {
            tables[one] += 1;
        }
        for(int i = 0; i < arr.size(); i++)
        {
            if(tables[arr[i]] == 1)
            {
                k--;
            }
            if(k == 0)
            {
                return arr[i];
            }
        }
        return string("");
        
    }
};