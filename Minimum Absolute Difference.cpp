#include <vector>
#include <algorithm>
#include <limits.h>


using namespace std;




class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        int arrLenth = arr.size();
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        for(int i = 0; i < arrLenth - 1; i++)
        {
            min_diff = min(min_diff, arr[i + 1] - arr[i]);
        }
        vector<vector<int>> res;
        for(int i = 0; i < arrLenth - 1; i++)
        {
            if(arr[i + 1] - arr[i] == min_diff)
            {
                res.push_back({arr[i], arr[i + 1]});
            }

        }
        return res;
    }
};