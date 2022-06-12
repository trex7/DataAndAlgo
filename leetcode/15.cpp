// leetcode go normal on greater or smaller. otherwise move both left and right until they are not same
// also control i for all duplicates as well. so two checks. One on i and other on equal to 0 sum.


#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        
        for(int i =0;i<nums.size();i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            
            int j =i+1;
            int k = nums.size()-1;
            while(j<k){
                int total=nums[i]+nums[j]+nums[k];
                
                if(total==0){
                    result.push_back({nums[i],nums[j],nums[k]});
                    while(j<k and nums[j]==nums[j+1]){
                        j++;
                    }
                    j+=1;
                    while(j<k and nums[k]==nums[k-1]){
                        k--;
                    }
                    k-=1;
                }else if(total>0){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return result;
    }
};

