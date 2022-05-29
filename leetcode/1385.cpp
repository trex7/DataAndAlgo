// leetcode 1385 - very brute force solution. shitty question.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        
        for(auto i : arr1){
            bool flag= true;
            for(auto j: arr2){
                if(abs(j-i)<=d){
                    flag =false;
                    break;
                }
                
            }
            if(flag){
                count++;
            }    
        }
        
        return count;
    }
};
