#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> maps;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            maps[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            const int gap = target - nums[i];
            if(maps.find(gap) != maps.end() && maps[gap] > i)
            {
                result.push_back(i);
                result.push_back(maps[gap]);
                break;
            }
        }
        return result;
    }
};