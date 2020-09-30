#include <vector>



using namespace std;


class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A)
    {
        vector<bool> res;
        int Alenth = A.size();
        int num = 0;
        for(int i = 0; i < Alenth; i++)
        {
            num = (num << 1) + A[i];
            if(num % 5 == 0)
            {
                res.push_back(true);
            }else{
                res.push_back(false);
            }
            num = num % 5;
        }
        return res;
    }
};