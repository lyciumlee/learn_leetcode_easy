#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
        const int arrLenth = arr.size() / 4;
        for(int i = 0; i < 4; i++)
        {
            const int x = arr[i * arrLenth];
            const auto [it1, it2] = equal_range(arr.begin(), arr.end(), x);
            if(it2 - it1 > arrLenth) return x;
        }
        return -1;
    }
};