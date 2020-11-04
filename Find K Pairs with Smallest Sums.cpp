#include <vector>
#include <algorithm>

using namespace std;



class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        for (int i = 0; i < min((int)nums1.size(), k); ++i) {
            for (int j = 0; j < min((int)nums2.size(), k); ++j) {
                vector<int> temp(2, 0);
                temp[0]=nums1[i];
                temp[1] = nums2[j];
                res.push_back(temp);
            }
        }
        sort(res.begin(), res.end(), [](vector<int> &a, vector<int> &b){return a[0] + a[1] < b[0] + b[1];});
        if (res.size() > k) res.erase(res.begin() + k, res.end());
        return res;
    }
};