#include <vector>


using namespace std;



class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int l = 0;
        int r = arr.size();
        while(l < r)
        {
            int m = l + (r - l) / 2;
            if(arr[m] > arr[m + 1])
            {
                r = m;
            }else{
                l = m + 1;
            }
        }
        return l;
    }
};