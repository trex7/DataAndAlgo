//tribonnaci code

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    
    void reverse(vector<int>&nums, int start, int end){
        
        while(start<end){
            swap(nums[start++],nums[end--]);
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k==0){
            return;
        }
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,0,nums.size()-1);
    }
};