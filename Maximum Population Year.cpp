#include <bits/stdc++.h>



using namespace std;



class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs)
    {
        vector<int> population_table(101, 0);
        for(auto& one_person: logs)
        {
            for(int i = one_person[0] - 1950; i < one_person[1] - 1950;i++)
            {
                population_table[i] += 1;
            }
        }    
        int max_index = 0;
        int max_num = population_table[0];
        for(int i = 1; i < 101; i++)
        {
            if(population_table[i] > max_num)
            {
                max_index = i;
                max_num = population_table[i];
            }
        }
        return (1950+max_index);
    }
};
