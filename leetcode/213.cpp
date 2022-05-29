// leetcode 213 - need to reset the map.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    
    unordered_map<int,int> mp;
    
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int a = helper(0,0,nums.size()-2,nums);
        mp.clear();
        int b = helper(1,1,nums.size()-1,nums);
        return max(a,b);
    }
    
    
    
    int helper(int pos, int start, int end, vector<int>& nums){
        if(pos>=end+1){
            return 0;
        }
        
        if(mp.count(pos)){
            return mp[pos];
        }
        
        //either take or leave
        int take = nums[pos] + helper(pos+2,start, end, nums);
        int leave = helper(pos+1, start, end, nums);
        
        return mp[pos] = max(take,leave);
    }
};