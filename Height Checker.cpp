#include <vector>
#include <algorithm>



using namespace std;



class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int> sorted(heights);
        sort(sorted.begin(), sorted.end());
        int res = 0;
        int heightsLenth = heights.size();
        for(int i = 0; i < heightsLenth; i++)
        {
            if(sorted[i] != heights[i])
            {
                res++;
            }
        }
        return res;
    }
};