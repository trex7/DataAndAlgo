// this is a stupid way of doing this. Should have gone with a bucket strat
// checked which element in bucket = nums.size(). Counter approach. gege noob.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        set<int> st;
        set<int> newst;
        
        int i =0;
        
        for(auto num: nums){
            if(i==0){
                for(auto i : num){
                    st.insert(i);
                }
            }else{
                for(auto i : num){
                    newst.insert(i);
                }
                
                for(auto i : st){
                    if(newst.count(i)==0){
                        st.erase(i);
                    }
                }
                newst.clear();
            }
            
            i++;
        }
        
        vector<int> result;
        for(auto i : st){
            result.push_back(i);
        }
        return result;
    }
};