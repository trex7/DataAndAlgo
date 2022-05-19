// tusing backtrack to create all possible outcomes. doubt I can do this again without help.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

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
    
    unordered_map<int, vector<TreeNode*>> mp;
    
    vector<TreeNode*> allPossibleFBT(int n) {
        return helper(n);
    }
    
    vector<TreeNode*> helper(int n){
        if(n==0){
            return vector<TreeNode*>();
        }
        
        if(n==1){
            vector<TreeNode*> result;
            result.push_back(new TreeNode(0));
            return result;
        }
        
        if(mp.count(n)){
            return mp[n];
        }
        
        vector<TreeNode*> result;
        
        for(int l =0;l<n-1;l++){
            int r= n-l-1;
            
            vector<TreeNode*> left = helper(l);
            vector<TreeNode*> right = helper(r);
            
            for(auto i : left){
                for(auto j: right){
                    TreeNode* newNode = new TreeNode(0,i,j);
                    result.push_back(newNode);
                }
            }
        }
        
        return mp[n]=result;
    }
};