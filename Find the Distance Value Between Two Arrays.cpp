#include <vector>
#include <algorithm>


using namespace std;




class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
        sort(arr2.begin(), arr2.end());
        int res = 0;
        for(int a1: arr1)
        {
            auto it1 = lower_bound(arr2.begin(), arr2.end(), a1 - d);
            auto it2 = upper_bound(arr2.begin(), arr2.end(), a1 + d);
            if(it1 == it2) res++;
        }
        return res;
    }
};