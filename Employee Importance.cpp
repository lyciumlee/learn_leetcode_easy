/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};


class Solution {
public:
    int getImportance(vector<Employee*> employees, int id)
    {
        unordered_map<int, Employee*> es;
        for(auto e: employees)
        {
            es.emplace(e->id, e);
        }
        queue<int> q;
        q.push(id);
        int sum = 0;
        while(!q.empty())
        {
            int eid = q.front();
            q.pop();
            auto e = es[eid];
            sum += e->importance;
            for(auto rid: e->subordinates)
            {
                q.push(rid);
            }
        }
        return sum;
    }
};