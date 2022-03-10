#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles)
    {
        for(int i = 0; i < rectangles.size(); i++)
        {
            vector<int>& reg = rectangles[i];
            if(reg[0] < reg[1])
            {
                reg[1] = reg[0];
            }else{
                reg[0] = reg[1];
            }
        }
        sort(rectangles.begin(), rectangles.end(), [&](vector<int>& a, vector<int>& b){
            return a[0] > b[0];
        });
        int res = 1;
        int maxside = rectangles[0][0];
        for(int i = 1; i < rectangles.size(); i++)
        {
            if(rectangles[i][0] == maxside)
            {
                res += 1;
            }else{
                return res;
            }
        }
        return res;
    }
};

