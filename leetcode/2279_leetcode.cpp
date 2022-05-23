#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        for(int i =0;i<capacity.size();i++){
            capacity[i] -= rocks[i];
        }
        
        int res =0;
        
        sort(capacity.begin(),capacity.end());
        
        for(int i =0;i<capacity.size() and additionalRocks>0;i++){
            if(additionalRocks>=capacity[i]){
                res++;
                additionalRocks -= capacity[i];
            }else{
                break;
            }
        }
        
        return res;
    }
};