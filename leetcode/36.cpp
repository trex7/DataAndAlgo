// leetcode - dont forget to check the type of the graph. In our case, empty was defined by
// "." which had to be ignored. :)

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<vector<int>> rows(9,vector<int>(9,0));
        vector<vector<int>> cols(9,vector<int>(9,0));
        vector<vector<vector<int>>> box(3,vector<vector<int>>(3,vector<int>(9,0)));
        
        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
                if(board[i][j]!='.'){
                    int e = board[i][j] - '0';
                    if(rows[i][e-1]==1 or cols[j][e-1]==1 or box[i/3][j/3][e-1]==1){
                        return false;
                    }

                    rows[i][e-1]=1;
                    cols[j][e-1]=1;
                    box[i/3][j/3][e-1]=1;
                }
                
            }
        }
        return true;
    }
};
