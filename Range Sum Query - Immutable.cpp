#include <vector>




using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums)
    {
        int numLenth = nums.size();
        dp.resize(numLenth + 1, 0);
        for(int i = 1; i <= numLenth; i++)
        {
            dp[i] = dp[i-1] + nums[i-1];
        }

    }
    
    int sumRange(int i, int j) {
        return dp[j+1] - dp[i];
    }


private:
    vector<int> dp;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */