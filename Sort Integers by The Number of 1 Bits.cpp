#include <vector>
#include <algorithm>


using namespace std;



class Solution {
public:
    vector<int> sortByBits(vector<int>& arr)
    {
        auto cmp = [](const int a, const int b){
            int key_a = __builtin_popcount(a);
            int key_b = __builtin_popcount(b);
            if(key_a != key_b) return key_a < key_b;
            return a < b;
        };
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};