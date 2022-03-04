#include <bits/stdc++.h>



using namespace std;




class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces)
    {
        unordered_map<int, int> record_piece_index;
        for(int i=0; i < pieces.size(); i++)
        {
            record_piece_index[pieces[i][0]] = i;
        }
        int cnt = 0;
        int arr_size = arr.size();
        while(cnt < arr_size)
        {
            auto search_item = record_piece_index.find(arr[cnt]);
            if(search_item == record_piece_index.end())
            {
                return false;
            }else{
                auto get_piece = pieces[search_item->second];
                for(int ii = 0; ii < get_piece.size(); ii++)
                {
                    if(get_piece[ii] != arr[cnt])
                    {
                        return false;
                    }else{
                        cnt++;
                    }
                }
            }
        }
        return true;
    }
};


