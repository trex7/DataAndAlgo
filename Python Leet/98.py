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
    def isValidBST(self, root: TreeNode) -> bool:
        res =[]
        self.helper(root,res)
        if len(res)<=1:
            return True
        #print(res)
        for i in range(len(res)-1):
            if i+1<len(res) and res[i]>=res[i+1]:
                return False
        
        return True
    
    def helper(self,root,res):
        if not root:
            return
        
        self.helper(root.left,res)
        res.append(root.val)
        self.helper(root.right,res)

