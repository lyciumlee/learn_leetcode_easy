#include <vector>


using namespace std;



class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> res;
        for(int n=left; n <= right; n++)
        {
            int t = n;
            bool valid = true;
            while(t && valid)
            {
                const int r = t % 10;
                if(r == 0 || n % r)
                {
                    valid = false;
                }
                t = t / 10;
            }
            if(valid) res.push_back(n);
        }
        return res;
    }
};