// leetcode - good bfs implementation. Good catch on BFS

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> dir = {0,1,0,-1,0};
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        int co=0;
        
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=-1;
                }
                if(grid[i][j]==1){
                    co++;
                }
            }
        }
        
        if(co==0){
            return 0;
        }
        
        int count=-1;
        
        
        while(!q.empty() and co>0){
            
            int s = q.size();
            count++;
            
            for(int i=0;i<s;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                if(grid[x][y]==0 or grid[x][y]==2){
                    continue;
                }
                
                if(grid[x][y]==1){
                    co--;
                }
                
                grid[x][y]=2;

                for(int d=0;d<4;d++){
                    int nx = x+dir[d];
                    int ny = y+dir[d+1];
                    if(nx>=0 and ny>=0 and nx<n and ny<m and grid[nx][ny]==1){
                        q.push({nx,ny});
                    }
                }
            }
            
            
            
        }
        
        return co==0?count:-1;
    }
};
