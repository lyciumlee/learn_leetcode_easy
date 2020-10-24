#include <vector>
#include <climits>


using namespace std;


class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int m1 = INT_MAX;
        int m2 = INT_MAX;
        for(auto a: nums)
        {
            if(m1 >= a) m1 = a;
            else if(m2 >= a) m2 = a;
            else return true;
        }
        return false;
    }
};