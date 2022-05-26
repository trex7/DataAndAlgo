# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def isBadVersion(version: int) -> bool:
        return False

    def firstBadVersion(self, n: int) -> int:
        
        start =1
        end =n
        pos = -1
        
        while start<=end:
            mid = start + (end-start)//2
            isBad = self.isBadVersion(mid)
            
            if isBad:
                pos= mid
                end= mid-1
            else:
                start = mid+1
                
        return pos
                
            