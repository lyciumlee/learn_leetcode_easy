#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int index0 = 0;
        int indexNum = 0;
        int numLenth = nums.size();
        while(indexNum < numLenth)
        {
            if(nums[indexNum])
            {
                swap(nums[indexNum], nums[index0++]);
            }
            indexNum++;
        }
    }
};