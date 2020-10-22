#include <vector>


using namespace std;


class Solution {
public:
    int hIndex(vector<int>& citations)
    {
        int len = citations.size();
        int left = 0;
        int right = len - 1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(citations[mid] == len - mid) return len - mid;
            else if(citations[mid] > len - mid) right = mid - 1;
            else left = mid + 1;
        }
        return len - left;

    }
};