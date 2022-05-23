#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        long prevSlope=LONG_MIN;
        int count =0;
        
        
        sort(stockPrices.begin(), stockPrices.end());
        
        for(int i =1;i<stockPrices.size();i++){
            
            long a = stockPrices[i][1];
            long b = stockPrices[i-1][1];
            long c = stockPrices[i][0];
            long d = stockPrices[i-1][0];
            
            //if (stockPrices[i][1] -stockPrices[i-1][1])==0
            long newSlope = (long)(a-b)/(c-d);
            
            if(newSlope!=prevSlope){
                count++;
                
            }
            
            prevSlope =newSlope;
            
            
            
        }
        
        return count;
    }
};