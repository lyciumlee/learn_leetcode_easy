#include <algorithm>
#include <vector>

using namespace std;



class Solution {
public:
    int countLargestGroup(int n)
    {
        vector<int> count(100, 0);
        auto sumDigits = [](int i){
            int sum = 0;
            while(i)
            {
                sum += i % 10;
                i = i / 10;
            }
            return sum;
        };
        for(int i=1; i <= n ; i++)
        {
            count[sumDigits(i)]++;
        }
        int res = 0;
        int max = *max_element(count.begin(), count.end());
        for(int i = 0; i < 100; i++)
        {
            if(count[i] == max) res++;
        }
        return res;
    }
};