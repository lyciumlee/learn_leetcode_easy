#include <vector>



using namespace std;




class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A)
    {
        vector<int> even;
        vector<int> odd;
        for(int a: A)
        {
            if(a % 2 == 0)
            {
                even.push_back(a);
            }else{
                odd.push_back(a);
            }
        }
        auto it1 = even.begin();
        auto it2 = odd.begin();
        for(int i = 0; i < A.size(); i++)
        {
            A[i] = *it1;
            it1++;
            swap(it1, it2);
        }
        return A;

    }
};