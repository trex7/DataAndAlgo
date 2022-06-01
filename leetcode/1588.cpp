// leetcode - this is brute force, need to think of the combination solution.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i =0;i<arr.size();i++){
            int tsum=0;
            int count=0;
            
            for(int j=i;j<arr.size();j++){
                tsum += arr[j];
                count++;
                if(count%2==1){
                    sum += tsum;
                }
            }
            
            
        }
        return sum;
    }
};
