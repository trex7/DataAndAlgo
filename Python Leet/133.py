import math
from typing import List
import sys
from functools import lru_cache


# template
#

# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        if not node:
            return node
        
        mp={}
        return self.helper(node,mp)
    
    def helper(self, node, mp):
        if node in mp:
            return mp[node]
        
        new_node = Node(node.val)
        mp[node] = new_node
        
        for n in node.neighbors:
            new_node.neighbors.append(self.helper(n,mp))
        
        return new_node

