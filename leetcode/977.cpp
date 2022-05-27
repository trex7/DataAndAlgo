//tribonnaci code

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> result(nums.size(),0);
        
        int i =0;
        int j=nums.size()-1;
        int k = nums.size()-1;
        
        while(i<=j){
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            
            if(a>b){
                result[k--]= a;
                i++;
            }else{
                result[k--]=b;
                j--;
            }
        }
        
        return result;
            
    }
};