import math
from typing import List


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        total = -math.inf
        temp_total =0
        
        for u in nums:
            if temp_total + u > u:
                temp_total += u
            else:
                temp_total=u
            
            total = max(total, temp_total)
            
        
        return total