// 53 - maximum subarray - if total_till_now + next_elem > next_elem then total_tills_now += next_elem else total_till_now = next_elem


#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int total = INT_MIN;
        
        
        for(int i =0;i<nums.size();i++){
            if(sum + nums[i] < nums[i]){
                sum = nums[i];
                
            }else{
                 sum  += nums[i];
            }
            
            total = max(total, sum);
        }
        
        return total;
    }
};