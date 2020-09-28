#include <queue>


using namespace std;

class RecentCounter {
public:
    RecentCounter()
    {
        
    }
    
    int ping(int t)
    {
        while (!myQ.empty())
        {
            if(myQ.front() + 3000 >= t) break;
            myQ.pop();
        }
        myQ.push(t);
        return myQ.size();
    }


private:
    queue<int> myQ;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */