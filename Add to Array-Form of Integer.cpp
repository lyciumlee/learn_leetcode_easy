#include <vector>



using namespace std;


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K)
    {
        vector<int> res;
        int Alenth = A.size();
        for(int i = Alenth - 1; i >= 0; i--)
        {
            res.insert(res.begin(), (A[i] + K) % 10);
            K = (K + A[i]) / 10;
        }
        while(K > 0)
        {
            res.insert(res.begin(), K % 10);
            K = K / 10;
        }
        return res;
    }
};