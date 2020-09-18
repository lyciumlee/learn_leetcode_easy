#include <vector>


using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        if(numRows == 0) return result;
        result.push_back(vector<int>(1,1));
        for(int i = 2; i <= numRows;i++)
        {
            vector<int> current(i, 1);
            const vector<int> &pre = result[i - 2];
            for(int j=1; j< i-1;j++)
            {
                current[j] = pre[j] + pre[j-1];
            }
            result.push_back(current);
        }
        return result;
    }
};