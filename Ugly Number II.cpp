#include <queue>


using namespace std;



class Solution {
public:
    int nthUglyNumber(int n)
    {
        priority_queue<long, vector<long>, greater<long>> pq;
        pq.push(1);
        for(int i = 1; i < n; i++)
        {
            long t = pq.top();
            pq.pop();
            while(!pq.empty() && pq.top() == t)
            {
                t = pq.top();
                pq.pop();
            }
            pq.push(t * 2);
            pq.push(t * 3);
            pq.push(t * 5);
        }
        return pq.top();
    }
};