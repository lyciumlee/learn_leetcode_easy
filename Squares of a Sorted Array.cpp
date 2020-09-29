#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& A)
    {
        int Alenth = A.size();
        vector<int> res(Alenth, 0);
        int i = 0, j = Alenth - 1;
        int cnt = Alenth - 1;
        while(i < j)
        {
            if(abs(A[i]) > abs(A[j]))
            {
                res[cnt] = abs(A[i]) * abs(A[i]);
                cnt--;
                i++;
            }else{
                res[cnt] = abs(A[j]) * abs(A[j]);
                cnt--;
                j--;
            }
        }
        res[cnt] = abs(A[i]) * abs(A[i]);
        return res;
    }
};