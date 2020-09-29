#include <vector>




using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills)
    {
        int five =0, ten = 0;
        for(int one: bills)
        {
            if(one == 5) five++;
            else if(one == 10)
            {
                five--;
                ten++;
            }
            else if(ten > 0)
            {
                ten--;
                five--;
            }
            else{
                five -= 3;
            }
            if(five < 0) return false;
        }
        return true;
    }
};