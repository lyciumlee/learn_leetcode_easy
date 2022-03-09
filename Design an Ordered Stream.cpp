#include <bits/stdc++.h>

using namespace std;


class OrderedStream {
public:
    OrderedStream(int n) {
        this->n = n;
        this->output_buffer = vector<string>(n, null_str);
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> res;
        this->output_buffer[idKey - 1] = value;
        for(int i = this->ptr; (i < this-> n) && (this->output_buffer[i] != null_str); i++)
        {
            this->ptr++;
            res.push_back(this->output_buffer[i]);
        }
        return res;
    }

private:
    vector<string> output_buffer;
    int ptr = 0;
    int n = 0;
    string null_str = "0";
};