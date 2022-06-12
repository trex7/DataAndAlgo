// leetcode counting sort might be a better solution to this.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    int specialArray(vector<int>& nums) {
        int count=0;
        int total=0;
        
        for(int i =0;i<=nums.size();i++){
            total=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    total++;
                }
            }
            
            if(total == i){
                return i;
            }
        }
        
        
        return count==0?-1:count;
    }
};