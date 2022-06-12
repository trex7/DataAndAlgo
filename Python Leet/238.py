#traversing a reversed list
import math
from typing import List
import sys
from functools import lru_cache


# template
#
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        dp = [1]*len(nums)
        prod=1
        
        for i in range(len(nums)):
            dp[i] *= prod
            prod *= nums[i]
        
        prod=1
        
        for i in range(len(nums)-1,-1,-1):
            dp[i] *= prod
            prod *= nums[i]
        
        return dp

