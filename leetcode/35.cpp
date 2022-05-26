// insert at location. this is the simple method. otherwise try to block both sides 
//as shown in the commented code.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start= 0;
        int end = nums.size()-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(nums[mid]<target){
                start = mid+1;
            }else{
                end=mid-1;
            }
        }
        
        return start;
    }
};

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
        
//         //go with the upperend, 
//         if(target>nums[nums.size()-1]){
//             return nums.size();
//         }
        
//         int start =0;
//         int end = nums.size()-1;
//         int pos = nums.size();
        
//         while(start<=end){
//             int mid = start +(end-start)/2;
            
//             if(nums[mid]==target){
//                 return mid;
//             }
            
//             if(nums[mid]<target){
//                 pos = mid+1;
//                 start = mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
        
//         return pos==nums.size()?0:pos;
//     }
// };