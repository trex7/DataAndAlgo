// leetcode 121 best time to buy and sell stock

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int mini =INT_MAX;
        for(auto i : prices){
            mini =min(mini,i);
            result =max(result, i-mini);
        }
        return result;
    }
};
