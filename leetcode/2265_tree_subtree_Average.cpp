#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  
class Solution {
public:
    int count =0;
    
    int averageOfSubtree(TreeNode* root) {
        
        helper(root);
        return count;
        
    }
    
    pair<int,int> helper(TreeNode* root){
        if(!root){
            return make_pair(0,0);
        }
        
        if(!root->left and !root->right ){
            
                count++;
                return make_pair(1,root->val);
            
            
        }
        
        int left_count=0;
        int left_total=0;
        
        if(root->left){
            auto p = helper(root->left);
            left_count = p.first;
            left_total = p.second;
        }
        
        int right_count=0;
        int right_total=0;
        
        if(root->right){
            auto p = helper(root->right);
            right_count = p.first;
            right_total = p.second;
        }
        
        int total_count = 1+left_count+right_count;
        int total = root->val + left_total + right_total;
        
        if(root->val == total/total_count){
            count++;
            
        }
        
        return make_pair(total_count,total);
        
        
    }
};