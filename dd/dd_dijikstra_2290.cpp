
#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;
static auto cmp=[](auto &l,auto &r){return l[2]>r[2];};
static vector<int> dirs={0,-1,0,1,0};
class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        priority_queue<array<int,3>,vector<array<int,3>>,decltype(cmp)> pq(cmp);
        vector<vector<int>> dist(grid.size(),vector<int>(grid[0].size(),grid.size()*grid[0].size()));
        dist[0][0]=0;
        pq.push({0,0,0});
        while(!pq.empty()) {
            auto [i,j,d]=pq.top();
            pq.pop();
            if(d>dist[i][j])
                continue;
            if(i==grid.size()-1&&j==grid[0].size()-1)
                return d;
            int x,y;
            for(int k=0;k<4;k++) {
                x=i+dirs[k],y=j+dirs[k+1];
                if(x>=0&&y>=0&&x<grid.size()&&y<grid[0].size()) {
                    if(grid[x][y]==1&&dist[x][y]>d+1)
                        pq.push({x,y,d+1}),dist[x][y]=d+1;
                    else if(grid[x][y]==0&&dist[x][y]>d)
                        pq.push({x,y,d}),dist[x][y]=d;
                }
            }
            
        }
        return -1;
    }
};