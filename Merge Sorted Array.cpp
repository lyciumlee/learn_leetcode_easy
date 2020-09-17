#include <vector>




using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int ida,idb,icur;
        ida = m - 1;
        idb = n - 1;
        icur = m + n - 1;
        while(ida >= 0 && idb >= 0)
        {
            nums1[icur--] = nums1[ida] >= nums2[idb] ? nums1[ida--] : nums2[idb--];
        }
        while(idb >= 0)
        {
            nums1[icur--] = nums2[idb--];
        }
        while (ida >= 0)
        {
            nums1[icur--] = nums1[ida--];
        }
        

    }
};