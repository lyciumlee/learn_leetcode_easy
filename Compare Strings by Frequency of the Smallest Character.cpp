#include <vector>
#include <string>


using namespace std;



class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words)
    {
        vector<int> qs, ws;
        for(string q: queries)
        {
            qs.push_back(getFrequency(q));
        }
        for(string w: words)
        {
            ws.push_back(getFrequency(w));
        }
        vector<int> res;
        for(int q: qs)
        {
            int count = 0;
            for(int w: ws)
            {
                if(w > q) count++;
            }
            res.push_back(count);
        }
        return res;
    }
    int getFrequency(string words)
    {
        vector<int> counts(26, 0);
        for(char w: words)
        {
            counts[w - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(counts[i] != 0) return counts[i];
        }
        return 0;
    }
};