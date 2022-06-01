// leetcode - this is a tricky question -  keep one stack for input and the other for output
// always push into input, remove always from output. flush input to output when output gets empty.
 

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class MyQueue {
public:
    
    stack<int> input, output;
    
    MyQueue() {
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        peek();
        if(!output.empty()){
            int ret = output.top();
            output.pop();
            return ret;
        }
        
        return -1;
        
    }
    
    int peek() {
        if(output.size()==0){
            
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        
        int ret =output.top();
        return ret;
    }
    
    bool empty() {
        return input.empty() and output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

