#include <vector>
#include <algorithm>

using namespace std;



class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        int minSum = 0;
        int sum = 0;
        for(int num: nums)
        {
            sum += num;
            minSum = min(minSum, sum);
        }
        return -minSum + 1;
    }
};