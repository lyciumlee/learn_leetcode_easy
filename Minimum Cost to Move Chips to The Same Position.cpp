#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int minCostToMoveChips(vector<int>& position)
    {
        int even = 0, odd = 0;
        for(int pos: position)
        {
            if(pos % 2 == 0)
            {
                even++;
            }else{
                odd++;
            }
        }
        return min(even, odd);
    }
};