#include <vector>
#include <queue>
#include <algorithm>


using namespace std;



class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K)
    {
        for(int a: A)
        {
            myQ.push(a);
        }
        for(int i = 0; i < K; i++)
        {
            int tmp = myQ.top();
            myQ.pop();
            myQ.push(-tmp);
        }
        int res = 0;
        while(!myQ.empty())
        {
            int tmp = myQ.top();
            myQ.pop();
            res += tmp;
        }
        return res;
    }
private:
    priority_queue<int, vector<int>, greater<int>> myQ;
};