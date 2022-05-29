// leetcode 
/**
 * @file 1293.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * One of the best problems I have solved yet.
 * Basically the focus of this questions was on finding the shortest distance  frmo start to
 * end in a grid  which is weighted, atmost k obstacles can be removed and we need to return
 * the minimum number of steps. Important to note here is that the focus is not on the weight
 * but on the minimum jumps. This is key in noticing that BFS>Dijikstra over here. Hence a 
 * normal queue and not a priority queue was used. Beautiful question.
 */
#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        vector<int> dir ={0,1,0,-1,0};
        
        int n =grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m, -1));
        
        queue<vector<int>> q;
        vector<int> state ={0,0,0,k};
        int result = -1;
        
        q.push(state);
        
        while(!q.empty()){
            vector<int> present = q.front();
            q.pop();
            
            //need to fifure out a better way to do this
            int x = present[0];
            int y = present[1];
            int steps = present[2];
            int obs_left = present[3];
            
            //out of bound
            if(x<0 or y<0 or x>=n or y>=m){
                continue;
            }
            
            //bfs-> if reached then good.
            if(x==n-1 and y==m-1){
                return steps;
            }
            
            if(grid[x][y]==1){
                obs_left--;
                if(obs_left<0){
                    continue;
                }
            }
            //incase this hasnt been reached OR reached here without destroying as many obs then reuse
            if(dp[x][y]==-1 or dp[x][y]<obs_left){
                dp[x][y] = obs_left;
                for(int d=0;d<4;d++){
                    q.push({x+dir[d],y+dir[d+1],steps+1,dp[x][y]});
                }
            }
            
            
        }
        
        return result;
        
    }
};