#include <vector>



using namespace std;


class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination)
    {
        int distanceLenth = distance.size();
        int tot = 0;
        for(int i = 0; i < distanceLenth; i++)
        {
            tot += distance[i];
        }

        int res = 0;
        while(start != destination)
        {
            res += distance[start];
            start++;
            if(start == distanceLenth) start = 0;
        }
        return min(tot - res, res);
    }
};