#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;


class Solution {
public:
    double trimMean(vector<int>& arr)
    {
        sort(arr.begin(), arr.end());
        const int offset = arr.size() / 20;
        const int sum = accumulate(arr.begin() + offset, arr.end() - offset, 0);
        return static_cast<double>(sum) / (arr.size() - 2 * offset);

    }
};