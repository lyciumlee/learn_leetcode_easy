
#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
    {
        this->pre.resize(n);
        // init pre
        for(int i = 0; i < n; i++) {
            this->pre[i] = i;
        }
        for(auto& edge : edges) {
            this->pre[this->find(edge[0])]= this->find(edge[1]);
        }
        return this->find(source) == this->find(destination);
    }

    int find(int x)
    {
        if(this->pre[x] != x)
        {
            this->pre[x] = find(this->pre[x]);
        }
        return this->pre[x];
    }

private:
    vector<int> pre;
};

