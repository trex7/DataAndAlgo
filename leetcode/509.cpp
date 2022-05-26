//509 -  fibonnaci number


#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    unordered_map<int,int> mp;
    
    int fib(int n) {
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        
        if(mp.count(n)>0){
            return mp[n];
        }
        return mp[n] = fib(n-1) + fib(n-2);
    }
};