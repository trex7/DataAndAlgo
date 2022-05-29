import math
from typing import List
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res =[]
        d ={}
        for i in nums1:
            d[i] = d.get(i,0)+1
        
        for i in nums2:
            if i in d:
                d[i] -=1
                if d[i]==0:
                    del d[i]
                res.append(i)
        
        return res