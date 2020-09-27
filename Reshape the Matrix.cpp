#include <vector>


using namespace std;



class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
    {
        int rows = nums.size();
        int cols = nums[0].size();
        if(rows * cols != r * c) return nums;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c;j++)
            {
                int k = i*c+j;
                res[i][j] = nums[k / cols][k % cols];
            }
        }
        return res;
    }
};