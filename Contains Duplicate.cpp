#include <vector>
#include <unordered_map>



using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        unordered_map<int, int> hashTable;
        for(int i: nums)
        {
            if(hashTable.find(i) != hashTable.end()) return true;
            hashTable[i] = i;
        }
        return false;
    }
};