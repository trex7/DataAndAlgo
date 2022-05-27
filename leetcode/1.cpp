// leetcode 1 - two sum

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i =0;i<nums.size();i++){
            int v = nums[i];
            if(mp.count(target-v)){
                return {mp[target-v],i};
            }else{
                mp[v]=i;
            }
            
        }
        
        return result;
    }
};