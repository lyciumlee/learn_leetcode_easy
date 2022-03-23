#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int countElements(vector<int>& nums)
    {
        int n = nums.size();
        if(n <= 2) return 0;
        int res = 0;
        sort(nums.begin(), nums.end());

        int left = nums[0];
        int left_c = 0;
        while(left == nums[left_c] && left_c < n)
        {
            left_c++;
        }
        if(left_c == n) return 0;

        int right = nums[n-1];
        int right_c = n-1;
        while(right == nums[right_c] && right_c > -1)
        {
            right_c--;
        }
        if(right_c == -1) return 0;
        right_c = n-1-right_c;
        return max(n - right_c - left_c,0);
    }
};
