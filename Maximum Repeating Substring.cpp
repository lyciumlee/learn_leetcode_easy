#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int maxRepeating(string sequence, string word)
    {
        int out = 0;
        int word_size = word.length();
        int sequence_size = sequence.length();
        string findaim = word;
        int pos = 0;
        size_t next_word_pos = sequence.find(findaim, pos);
        while(next_word_pos != string::npos) {
            out += 1;
            findaim += word;
            next_word_pos = sequence.find(findaim, pos);
        }
        return out;
    }
};