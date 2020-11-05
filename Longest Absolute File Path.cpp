#include <string>
#include <unordered_map>
#include <iostream>
#include <sstream>


using namespace std;



class Solution {
public:
    int lengthLongestPath(string input) {
        int res = 0;
        istringstream ss(input);
        unordered_map<int, int> m{{0, 0}};
        string line = "";
        while (getline(ss, line)) {
            int level = line.find_last_of('\t') + 1;
            int len = line.substr(level).size();
            if (line.find('.') != string::npos) {
                res = max(res, m[level] + len);
            } else {
                m[level + 1] = m[level] + len + 1;
            }
        }
        return res;
    }
};
