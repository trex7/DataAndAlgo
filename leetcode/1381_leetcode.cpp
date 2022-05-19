// Stupid way of brute forcing this approach. cant find anything better for now :()

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class CustomStack {
public:
    
    vector<int> st;
    int max=0;
    
    CustomStack(int maxSize) {
        this->max = maxSize;    
    }
    
    void push(int x) {
        if(st.size()<max){
            st.push_back(x);
        }
    }
    
    int pop() {
        if(st.size()==0){
            return -1;
        }
        
        int ret =  st[st.size()-1];
        st.pop_back();
        return ret;
    }
    
    void increment(int k, int val) {
        
        for(int i =0;i<min(k,(int)st.size());i++){
            st[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */