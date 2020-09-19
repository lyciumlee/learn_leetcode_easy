#include <vector>







using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        vector<int> tmp = nums;
        int lenth = nums.size();
        for(int i = 0; i < lenth;i++)
        {
            nums[(i+k) % lenth] = tmp[i];
        }
    }
};