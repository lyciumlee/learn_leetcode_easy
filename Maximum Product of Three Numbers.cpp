#include <vector>
#include <queue>

using namespace std;


class Solution {
public:
    int maximumProduct(vector<int>& nums)
    {
        priority_queue<int, vector<int>, less<int>> min_q;
        priority_queue<int, vector<int>, greater<int>> max_q;
        for(int num: nums)
        {
            max_q.push(num);
            if(max_q.size() > 3) max_q.pop();
            min_q.push(num);
            if(min_q.size() > 2) min_q.pop();

        }
        int max3 = max_q.top(); max_q.pop();
        int max2 = max_q.top(); max_q.pop();
        int max1 = max_q.top(); max_q.pop();
        int min2 = min_q.top(); min_q.pop();
        int min1 = min_q.top(); min_q.pop();
        return max(max1 * max2 * max3, max1 * min1 * min2);

    }
};