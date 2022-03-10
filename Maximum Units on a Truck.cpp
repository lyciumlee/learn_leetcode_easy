#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [&](vector<int> a, vector<int> b){
                if(a[1] < b[1])
                {
                    return false;
                }else{
                    return true;
                }
            }
        );
        int max_unit = 0;
        int p = 0;
        int remain_size = truckSize;
        while(remain_size > 0 && p < boxTypes.size())
        {
            vector<int> select_box = boxTypes[p];
            if(select_box[0] >= remain_size)
            {
                max_unit += remain_size * select_box[1];
                break;
            }else{
                max_unit += select_box[0] * select_box[1];
                remain_size -= select_box[0];
            }
            p++;
        }
        return max_unit;       
    }
};