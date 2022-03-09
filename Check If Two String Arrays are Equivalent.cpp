#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one = "";
        string two = "";
        for(auto i: word1) {
            one += i;
        }
        for(auto i: word2) {
            two += i;
        }
        if(one.compare(two) != 0)
        {
            return false;
        }else{
            return true;
        }
    }
};



