#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        sort(arr.begin(), arr.end());
        int le = arr.size();
        if(le == 2) return true;
        int cur = arr[1] - arr[0];
        for(int i = 2; i < le; i++){
            if(cur != (arr[i] - arr[i-1])) return false;
        }
        return true;
    }
};
