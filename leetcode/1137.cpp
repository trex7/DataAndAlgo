//tribonnaci code

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    unordered_map<int,int> mp;
    
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }else if(n<=2){
            return 1;
        }
        
        if(mp.count(n)){
            return mp[n];
        }
        
        return mp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};