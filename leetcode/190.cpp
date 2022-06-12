// leetcode Interesting to use the bitwise & and not &&. Also notice the limits of 32 from 

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res= 0;
        
        for(int i =0;i<32;i++){
            res<<=1;
            if(n&1){
                
                res |= 1;
            }
            
            n>>=1;
            
        }
        
        return res;
    }
};
