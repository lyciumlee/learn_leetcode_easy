#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unordered_map<int, int> memo;
        return helper(nums, target, memo);
    }
    int helper(vector<int>& nums, int target, unordered_map<int, int>& memo) {
        if (target < 0) return 0;
        if (target == 0) return 1;
        if (memo.count(target)) return memo[target];
        int res = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            res += helper(nums, target - nums[i], memo);
        }
        return memo[target] = res;
    }
};