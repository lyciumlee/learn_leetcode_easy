#include <vector>


using namespace std;




class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int rep = -1;
        int arrLenth = arr.size();
        for(int i = arrLenth - 1; i >= 0; i--)
        {
            int temp = rep;
            rep = max(rep, arr[i]);
            arr[i] = temp;
        }
        return arr;
    }
};