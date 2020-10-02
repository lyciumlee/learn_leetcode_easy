#include <vector>


using namespace std;




class Solution {
public:
    void duplicateZeros(vector<int>& arr)
    {
        int arrLenth = arr.size();
        vector<int> tmp(arrLenth, 0);
        int cnt=0;
        for(int i = 0; i < arrLenth;i++)
        {
            if(arr[i] != 0)
            {
                tmp[cnt] = arr[i];
                cnt++;
            }else{
                cnt+=2;
            }
            if(cnt >= arrLenth) break;
        }
        for(int i = 0; i < arrLenth;i++)
        {
            arr[i] = tmp[i];
        }
    }
};