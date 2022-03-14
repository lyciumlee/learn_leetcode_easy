#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points)
    {
        int index = -1;
        int res = -1;
        for(int i = 0; i < points.size(); i++)
        {
            vector<int> item = points[i];
            if(item[0] == x || item[1] == y)
            {
                int Manhattan_distance = abs(item[0] - x) + abs(item[1] - y);
                if((Manhattan_distance < res) || (res == -1))
                {
                    res = Manhattan_distance;
                    index = i;
                }
            }
        }
        return index;
    }
};