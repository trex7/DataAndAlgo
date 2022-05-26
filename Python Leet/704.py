# This is throwing error. Need to get this fixed.
 

class Solution:
    def helper(nums, target, start, end):
        if start>end:
            return -1
        
        mid = start +(end-start)/2
        
        if nums[mid]==target:
            return mid
        
        if nums[mid]>target:
            return helper(nums, target, start, mid-1)
        else:
            return helper(nums, target, mid+1, end)
    
    
    def search(self, nums: List[int], target: int) -> int:
       
            return self.helper(nums, target, 0, (len(nums)-1))
    
    