from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        # sort the numbers and then check one by one
        nums.sort()
        for i in range(len(nums)-1):
            if nums[i] == nums[i+1]:
                return True
            
        return False