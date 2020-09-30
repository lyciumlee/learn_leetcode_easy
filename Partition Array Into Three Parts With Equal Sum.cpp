#include <vector>




using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A)
    {
        int sum = 0;
        for(int a: A)
        {
            sum += a;
        }
        if(sum % 3 != 0) return false;
        int count = 0;
        int part_sum = 0;
        int third_sum = sum / 3;
        int i = 0;
        int Alenth = A.size();
        while(i < Alenth)
        {
            part_sum += A[i];
            if(part_sum == third_sum)
            {
                count++;
                part_sum = 0;
            }
            i++;
        }
        return count >= 3;
    }
};