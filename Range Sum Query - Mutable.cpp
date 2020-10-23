#include <algorithm>
#include <vector>

using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums)
    {
        data.resize(nums.size());
        bit.resize(nums.size() + 1);
        for(int i = 0; i < nums.size(); i++)
        {
            update(i, nums[i]);
        }
    }
    
    void update(int i, int val)
    {
        int diff = val - data[i];
        for(int j = i + 1; j < bit.size(); j += (j & -j))
        {
            bit[j] += diff;
        }
        data[i] = val;
    }
    
    int sumRange(int i, int j)
    {
        return getSum(j + 1) - getSum(i);
    }

    int getSum(int i)
    {
        int res = 0;
        for(int j = i; j> 0; j -= (j & -j))
        {
            res += bit[j];
        }
        return res;
    }
private:
    vector<int> data, bit;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */