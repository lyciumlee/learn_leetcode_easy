#include <vector>
#include <set>
#include <unordered_map>



using namespace std;




class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr)
    {
        set<int> order(arr.begin(), arr.end());
        unordered_map<int, int> map;
        int r = 1;
        for(const int v: order)
        {
            map[v] = r;
            r++;
        }
        int arrLenth = arr.size();
        vector<int> res(arrLenth, 0);
        for(int i = 0; i < arrLenth; i++)
        {
            res[i] = map[arr[i]];
        }
        return res;
    }
};