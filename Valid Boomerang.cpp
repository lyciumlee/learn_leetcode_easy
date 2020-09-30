#include <vector>
#include <algorithm>


using namespace std;



class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points)
    {
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];

        int k1 = 0;
        int k2 = 0;
        // k1 = (y1 - y2) / (x1 - x2);
        // k2 = (y1 - y3) / (x1 - x3);
        if((y1-y3) * (x1-x2) == (y1-y2) * (x1-x3)) return false;
        // if(abs(k1 - k2) < 0.0001) return true;
        return true;
    }
};