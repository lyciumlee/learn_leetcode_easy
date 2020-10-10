#include <vector>
#include <algorithm>



using namespace std;




class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        partition(A.begin(), A.end(), [&](int a){return a % 2 == 0;});
        return A;
    }
};