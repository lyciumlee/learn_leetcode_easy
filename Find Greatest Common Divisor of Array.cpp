#include <bits/stdc++.h>



using namespace std;



class Solution {
public:
    int findGCD(vector<int>& nums)
    {
        int biggest = -1;
        int smallest = 0xfffffff;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > biggest)
            {
                biggest = nums[i];
            }
            if(nums[i] < smallest)
            {
                smallest = nums[i];
            }
        }
        return __gcd(biggest, smallest);
    }
    
};

