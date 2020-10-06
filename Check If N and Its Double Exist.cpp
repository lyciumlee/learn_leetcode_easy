#include <vector>
#include <set>



using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr)
    {
        set<int> hashSet;
        for(int num : arr)
        {
            if(num % 2 == 0 && hashSet.find(num / 2) != hashSet.end()) return true;
            if(hashSet.find(num * 2) != hashSet.end()) return true;
            hashSet.insert(num);
        }
        return false;
    }
};