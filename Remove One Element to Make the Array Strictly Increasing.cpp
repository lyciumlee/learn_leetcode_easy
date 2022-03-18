#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums)
    {
        /*
        遍历整个数组，直到找到一个递减的数对，此时大的数为k，小的数为k+1：
        如果k - 1 < 0，说明大的数在开头，删除即可。
        如果nums[k + 1] > nums[k - 1]，说明下标为k这个大数是驼峰，删除即可保证递增。
        如果K+ 2 >= n，说明小的数在末尾，删除即可。
        如果nums[k] < nums[k + 2]，说明下标为k+1这个小数是低谷，删除即可保证递增。
        */
       int ascending = true;
       int n = nums.size();
       for(int i = 0; i < n - 1; i++)
       {
           if(nums[i] >= nums[i + 1])
           {
               if(ascending)
               {
                   if(i - 1 < 0)
                   {
                       ascending = false;
                   }else if(nums[i + 1] > nums[i-1])
                   {
                       ascending = false;
                   }else if(i + 2 >= n)
                   {
                       ascending = false;
                   }else if(nums[i+2] > nums[i])
                   {
                       ascending = false;
                   }else{
                       return false;
                   }
               }else{
                   return false;
               }
           }
       }
       return true;
    }
};