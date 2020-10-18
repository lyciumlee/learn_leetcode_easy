#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_set>


using namespace std;


class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B)
    {
        int diff = (accumulate(A.begin(), A.end(), 0) - accumulate(B.begin(), B.end(), 0)) / 2;
		unordered_set<int> st(A.begin(), A.end());
		for (int num : B) {
			if (st.count(num + diff)) return {num + diff, num};
		}
		return {};
    }
};