#include <vector>


using namespace std;

class Solution {
public:
    vector<int> getRow(int numRows)
    {
        vector<int> res(numRows+1,1);
        for(int i = 0; i <= numRows; i++)
        {
            for(int j = i-1;j>0;j--)
            {
                res[j] = res[j-1] + res[j];
            }
        }
        return res;
    }
};