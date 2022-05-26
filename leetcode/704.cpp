//simple binary search.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        return helper(nums, target, 0, nums.size()-1);
    }
    
    int helper(vector<int>& nums, int target, int start, int end){
        
        if(start>end){
            return -1;
        }
        
        int mid = start + (end-start)/2;
        
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            return helper(nums, target, start, mid-1);
        }else{
            return helper(nums, target, mid+1, end);
        }
        
        
    }
};