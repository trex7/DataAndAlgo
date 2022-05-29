// leetcode 740
/**
 * @file 740.cpp
 * 
 * @author : trex
 * @brief 
 * @version 0.1
 * @date 2022-05-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * very interesting problem of take and leave. First calculate take, then calculate leave
 * and then come back to calculate take while managing the skipping of elements.
 * 
 */

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    unordered_map<int,int> mp;
    
    int deleteAndEarn(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        return helper(nums,0);
    }
    
    
    
    int helper(vector<int>& nums, int pos){
        if(pos==nums.size()){
            return 0;
        }
        
        if(mp.count(pos)){
            return mp[pos];
        }
        
        
        
        //pick
        int pick = 0;
        int p=pos;
        
        while(p<nums.size() and nums[p]==nums[pos]){
            pick += nums[p++];
        }
        
        //now you are at p
        int skip= helper(nums, p);
        int j =p;
        while(p<nums.size() and nums[p]==(nums[pos]+1)){
            p++;
        }
        
        
        pick += helper(nums, p);
        
        return mp[pos] = max(skip, pick);
        
    }
};