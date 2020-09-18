#include <stdint.h>
#include <stdint.h>
#include <limits.h>
#include <stack>



using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack()
    {
        
    }
    
    void push(int x)
    {

        myS.push(x);
        if(tmp.empty()) 
        {
            tmp.push(x);
        }else{
            if(x <= tmp.top())
            {
                tmp.push(x);
            }
        }
    }
    
    void pop()
    {
        if(myS.top() == tmp.top()) tmp.pop();
        myS.pop();
    }
    
    int top()
    {
        return myS.top();
    }
    
    int getMin()
    {
        return tmp.top();
    }
private:
    stack<int> myS, tmp;
};