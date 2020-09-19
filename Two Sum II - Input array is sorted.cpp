
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        unordered_map<int, int> maps;
        vector<int> result;
        int numsLenth = numbers.size(); 
        for (int i = 0; i < numsLenth; i++)
        {
            maps[numbers[i]] = i;
        }
        for(int i = 0; i < numsLenth; i++)
        {
            const int gap = target - numbers[i];
            if(maps.find(gap) != maps.end() && maps[gap] > i)
            {
                result.push_back(i + 1);
                result.push_back(maps[gap] + 1);
                break;
            }
        }
        return result;
    }
};