#include <vector>
#include <algorithm>


using namespace std;



class Solution {
public:
    double average(vector<int>& salary)
    {
        auto [lit, hit] = minmax_element(salary.begin(), salary.end());
        int sum = accumulate(salary.begin(), salary.end(), 0);
        return (sum - *lit - *hit) * 1.0 / (salary.size() - 2);
    }
};