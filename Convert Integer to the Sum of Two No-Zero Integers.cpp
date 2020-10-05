#include <vector>



using namespace std;




class Solution {
public:
    vector<int> getNoZeroIntegers(int n)
    {
        int i = 1;
        for(;i < n;i++)
        {
            if(!isContainZero(i) && !isContainZero(n - i))
            {
                break;
            }
        }
        return {i, n - i};
    }
    bool isContainZero(int n)
    {
        while(n > 0)
        {
            if(n % 10 == 0) return true;
            else{
                n /= 10;
            }
        }
        return false;
    }
};