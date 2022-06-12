// leetcode - interesting question to jog binary concepts.

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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 and !root2){
            return NULL;
        }
        
        if(root1 and !root2){
            return root1;
        }
        
        if(!root1 and root2){
            return root2;
        }
        
        int sum = root1->val + root2->val;
        TreeNode* newRoot = new TreeNode(sum);
        newRoot->left = mergeTrees(root1->left,root2->left);
        newRoot->right = mergeTrees(root1->right,root2->right);
        return newRoot;
    }
};
