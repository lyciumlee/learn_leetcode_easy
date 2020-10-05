#include <vector>


using namespace std;



class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums)
    {
        vector<int> res;
        int numsLenth = nums.size();
        for(int i = 0; i < numsLenth; i+=2)
        {
            int freq = nums[i];
            int val = nums[i+1];
            for(int j = 0; j < freq; j++)
            {
                res.push_back(val);
            }
        }
        return res;
    }
};