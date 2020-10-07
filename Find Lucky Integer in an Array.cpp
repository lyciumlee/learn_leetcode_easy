#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;





class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        unordered_map<int, int> freq;
        for(int x: arr) freq[x]++;
        int res = -1;
        for(const auto& [key, count]: freq)
        {
            if(key == count) res = max(key, res);
        }
        return res;
    }
};