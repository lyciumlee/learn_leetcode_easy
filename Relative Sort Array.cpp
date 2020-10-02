#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        int arr2Lenth = arr2.size();
        unordered_map<int, int> map;
        for(int i = 0; i < arr2Lenth; i++)
        {
            map[arr2[i]] = i;
        }
        auto cmp = [&](int x, int y){
            int ox = arr2Lenth + x;
            int oy = arr2Lenth + y;
            if(map.find(x) != map.end())
            {
                ox = map[x];
            }
            if(map.find(y) != map.end())
            {
                oy = map[y];
            }
            return ox < oy;
        };
        sort(arr1.begin(), arr1.end(), cmp);
        return arr1;
    }
};