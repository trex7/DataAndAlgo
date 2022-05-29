// leetcode 198 - house robber - not the fastest way but thats how my mind thinks now.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    unordered_map<int,int> mp;
    
    int rob(vector<int>& nums) {
        
        return max(helper(nums,0),helper(nums,1));
    }
    
    
    int helper(vector<int>& nums, int pos){
        if(pos>=nums.size()){
            return 0;
        }
        
        if(mp.count(pos)){
            return mp[pos];
        }
        
        int onestep = nums[pos] + helper(nums,pos+2);
        int twostep = helper(nums,pos+1);
        
        return mp[pos]=max(onestep, twostep);
    }
};
