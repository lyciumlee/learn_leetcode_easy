#include <vector>


using namespace std;



class Solution {
public:
    vector<int> sumZero(int n)
    {
        vector<int> res;
        int cnt = 1;
        while(n > 1)
        {
            res.push_back(cnt);
            res.push_back(-cnt);
            cnt++;
            n = n - 2;
        }
        if(n == 1)
        {
            res.push_back(0);
        }
        return res;
    }
};