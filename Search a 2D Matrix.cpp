#include <vector>


using namespace std;



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        if(matrix.empty() || matrix[0].empty()) return false;
        int i = 0, j = (int)matrix[0].size() - 1;
        while(i < matrix.size() && j >= 0)
        {
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) --j;
            else i++;
        }
        return false;
    }
};