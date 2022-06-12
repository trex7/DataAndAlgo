#in python just use simple list as queue implementation.
import math
from typing import List
import sys
from functools import lru_cache


# template
#

#Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if not root:
            return []
        q =[]
        q.append(root)
        
        result =[]
        
        while len(q)>0:
            s =len(q)
            row=[]
            for i in range(s):
                e=q[0]
                q.pop(0)
                row.append(e.val)
                if e.left:
                    q.append(e.left)
                if e.right:
                    q.append(e.right)
            result.append(row)
        return result
