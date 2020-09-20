#include <queue>



using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        myQ.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int bak = myQ.front();
        myQ.pop();
        return bak;
    }
    
    /** Get the front element. */
    int peek() {
        int bak = myQ.front();
        return bak;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return myQ.empty();
    }

private:
    queue<int> myQ;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */