#include <vector>


using namespace std;



class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
    {
        auto B = A;
        int m = A.size();
        int n = A[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                B[i][j] = 1 - A[i][n - j - 1];
            }
        }
        return B;
    }
};