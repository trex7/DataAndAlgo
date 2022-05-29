import math
from typing import List
import sys

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        total=0
        mini = sys.maxsize#float('inf')
        for i in prices:
            mini =min(mini,i)
            total =max(total,i-mini)
        
        return total