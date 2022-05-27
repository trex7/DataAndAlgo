import math
from typing import List
from functools import lru_cache

class Solution:
    @lru_cache(maxsize = None )
    def climbStairs(self, n: int) -> int:
        
        if n<0:
            return 0
        
        if n==1:
            return 1
        
        return self.climbStairs(n-1) + self.climbStairs(n-2)