// leetcode - 283 move all zeroes. clarified the swap logic

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int p =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[p++]);
            }
        }
    }
};
