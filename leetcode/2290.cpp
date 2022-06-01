// leetcode 
/**
 * 
 * This was a beautiful problem too. Important to note here was that the ask was to return
 * the minimum number of obstacles that needs to be remove. This is a clear case of Dijikstra
 * where the grid is like a weighted graph. Important to note that if it was instead asked to
 * return the minimum number of moves to reach the end, then we would use BFS instead. Also
 * to investigate is that when we only need to move downwards we can use dp. LIke dp is not 
 * useful when the movement is in all 4 directions. This needs to be verified. GOing to look
 * into questions like unique path and grid problems to verify.
 */
#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    
    vector<int> dir = {0,1,0,-1,0};
    
    int minimumObstacles(vector<vector<int>>& grid) {
        int n=grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        
        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        
        pq.push({grid[0][0],{0,0}});
        
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            int s = p.first;
            int i = p.second.first;
            int j = p.second.second;
            if(i==(n-1) and j==(m-1)){
                return s+grid[i][j];
            }
            
            for(int d =0;d<4;d++){
                int x = i+dir[d];
                int y = j+dir[d+1];
                
                if(x<0 or y<0 or x>=n or y>=m){
                    continue;
                }
                
                if(dp[x][y]>s+grid[x][y]){
                    pq.push({s+grid[x][y],{x,y}});
                    dp[x][y] = s+grid[x][y];
                }
                
            }
        }
        
        return -1;
        
    }
};