// leetcode - think solution for LCA for BST!! not normal LCA.
//think of the middle element being between the value of left and right.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode{
    int val;
    TreeNode* left; 
    TreeNode* right; 
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root->val>p->val and root->val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }else if(root->val<p->val and root->val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};
