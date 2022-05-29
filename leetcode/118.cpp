// leetcode - simulation

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        vector<int> prev = {1};
        result.push_back(prev);
        
        for(int i =2;i<=numRows;i++){
            
            vector<int> newline(result.back().size()+1,0);
            for(int i =0;i<result.back().size();i++){
                newline[i] += result.back()[i];
                newline[i+1] += result.back()[i];
            }
            result.push_back(newline);
        }
        
        return result;
    }
};
