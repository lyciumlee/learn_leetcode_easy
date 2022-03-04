#include <bits/stdc++.h>
#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> count_table;
        for(int num: nums) {
            count_table[num]++;
        }
        sort(begin(nums), end(nums), [&](int i, int j){
            if(count_table[i] != count_table[j]) {
                return count_table[i] < count_table[j];
            }else{
                return i > j;
            }
        });
        return nums;
    }
};