// using x^2 + y^2 <= r^2. Also remember raised to is not x^2 but rather use pow or x*x

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>> mp;
        
        for(auto circ : circles){
            for(int r1= -circ[2];r1<=circ[2];r1++){
                for(int r2= -circ[2];r2<=circ[2];r2++){
                    if(r1*r1 + r2*r2 <= (circ[2]*circ[2])){
                        mp.insert({circ[0]+r1,circ[1]+r2});
                    }
                }
            }
        }
        
        return mp.size();
    }
};