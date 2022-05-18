//forgot to check for size that sum needed to manage. Same mistake on array
//storage type. AHHH!!!! noooooob mistakessss
// check for types before submitting!!


#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    
    void print(vector<int> arr){
        for(auto i : arr){
            cout<<i<<" ";
        }
        
        cout<<endl;
        return;
    }
    int waysToSplitArray(vector<int>& nums) {
        int validSplits =0;
        
        vector<long long> front(nums.size(),0);
        vector<long long> reverse(nums.size(),0);
        
        long long sum =0;
        
        for(int i =0;i<nums.size();i++){
            sum +=nums[i];
            front[i]=sum;
        }
        
        sum=0;
        
        for(int i =nums.size()-1;i>=0;i--){
            reverse[i]=sum;
            sum+=nums[i];
        }
        
        for(int i =0;i<nums.size()-1;i++){
            if(front[i] >=reverse[i]){
                validSplits++;
            }
        }
        
        return validSplits;
    }
};