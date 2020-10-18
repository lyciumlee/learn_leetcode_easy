#include <vector>
#include <stdlib.h>


using namespace std;


class Solution {
public:
    int repeatedNTimes(vector<int>& A)
    {
        int i = 0;
        int j = 0;
        while(i == j || A[i] != A[j])
        {
            i = rand() % A.size();
            j = rand() % A.size();
        }
        return A[i];
    }
};