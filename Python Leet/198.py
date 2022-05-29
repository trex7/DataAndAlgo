import math
from typing import List
import sys
from functools import lru_cache


# template
# 198 - still giving error: 
class Solution:
    @lru_cache(maxsize=None)
    def helper(nums, pos)->int:
        if pos>= len(nums):
            return 0
        
        q = nums[pos] + self.helper(nums,pos+2)
        w = self.helper(nums,pos+1)
        
        return max(q,w)
        
        
    def rob(self, nums: List[int]) -> int:
        a= self.helper(nums,0)
        b= self.helper(nums,1)
        
        return max(a,b)

