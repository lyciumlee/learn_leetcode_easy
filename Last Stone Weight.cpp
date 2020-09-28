#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> myQ;
        for(int item: stones) myQ.push(item);
        while(myQ.size() >= 2)
        {
            int a = myQ.top();
            myQ.pop();
            int b = myQ.top();
            myQ.pop();
            if(a != b){
                myQ.push(a - b);
            }
        }
        return myQ.empty() ? 0 : myQ.top();
    }
};