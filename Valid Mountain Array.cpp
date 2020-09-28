#include <vector>

using namespace std;


class Solution
{
public:
    bool validMountainArray(vector<int>& A)
    {
        int ALenth = A.size();
        int i = 0;
        int j = ALenth - 1;
        while (i < ALenth - 1  && A[i] < A[i+1]) i++;
        while (j > 0 && A[j] < A[j-1]) j--;
        return i > 0 && j < ALenth - 1 && i == j;
        
    }
};