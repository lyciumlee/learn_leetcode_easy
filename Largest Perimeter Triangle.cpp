#include <vector>
#include <algorithm>



using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& A)
    {
        sort(A.begin(), A.end());
        int Alenth = A.size();
        int res=0;
        for(int i = Alenth - 1; i > 1; i--)
        {
            if(A[i] - A[i - 1] < A[i - 2] && A[i] < A[i - 1] + A[i - 2])
            {
                res = max(res, A[i] + A[i - 1] + A[i - 2]);
            }
        }
        return res;
    }
};