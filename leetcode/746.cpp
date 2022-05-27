//tribonnaci code

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        if(cost.size()<3){
            return min(cost[0],cost[1]);
        }
        
        vector<int> dp(cost.size(),0);
        vector<int> dp(cost.size(),0);
        for(int i =2;i<cost.size();i++){
            cost[i] += min(cost[i-1],cost[i-2]);
        }
        
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};