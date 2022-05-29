// leetcode 566 - simulation. interesting how elements go into a matrix.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>> result(r, vector<int>(c,0));
        int p=0;
        
        if(r*c != mat[0].size()*mat.size()){
            return mat;
        }
        
        for(int i =0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                result[p/c][p%c] = mat[i][j];
                p++;
            }
        }
        
        return result;
    }
};
