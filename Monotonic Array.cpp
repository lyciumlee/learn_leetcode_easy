#include <vector>



using namespace std;


class Solution {
public:
    bool isMonotonic(vector<int>& A)
    {
        int ALenth = A.size();
        bool inc = true, dec = true;
        for (int i = 1;i<ALenth;i++)
        {
            inc &= (A[i] >= A[i-1]);
            dec &= (A[i] <= A[i - 1]);
            if(!inc && !dec) return false;
        }
        return true;
    }
};