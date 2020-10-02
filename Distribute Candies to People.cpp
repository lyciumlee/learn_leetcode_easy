#include <vector>

using namespace std;



class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        vector<int> res(num_people, 0);
        int cur = 1;
        while(candies > 0)
        {
            for(int i =0; i < num_people; i++)
            {
                if(candies >= cur)
                {
                    res[i] += cur;
                    candies -= cur;
                }else{
                    res[i] += candies;
                    candies = 0;
                    break;
                }
                cur++;
            }

        }
        return res;
    }
};