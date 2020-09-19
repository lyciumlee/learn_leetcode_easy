#include <vector>
#include <unordered_map>



using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int, int> hashTable;
        int lenth = nums.size();
        for(int i=0; i<lenth; i++)
        {
            if(hashTable.find(nums[i]) != hashTable.end() && i - hashTable[nums[i]] <= k) return true;
            hashTable[nums[i]] = i;
        }
        return false;
    }
};