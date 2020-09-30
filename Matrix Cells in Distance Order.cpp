#include <vector>
#include <algorithm>



using namespace std;


struct node
{
	int x;
	int y;
	int dis;
};

bool cmp(node a, node b)
{
    if(a.dis == b.dis)
    {
        if(a.x == b.x)
        {
            return a.y < b.y;
        }else{
            return a.x < b.x;
        }
    }else{
        return a.dis < b.dis;
    }
}


class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0)
    {
        vector<node> a;
        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                node one;
                one.x = i;
                one.y = j;
                one.dis = abs(r0 - i) + abs(c0 - j);
                a.push_back(one);
            }
        }
        sort(a.begin(), a.end(), cmp);
        vector<vector<int>> res;
        int aLenth = a.size();
        for(int i = 0; i < aLenth; i++)
        {
            vector<int> tmp;
            tmp.push_back(a[i].x);
            tmp.push_back(a[i].y);
            res.push_back(tmp);
        }
        return res;
    }
};