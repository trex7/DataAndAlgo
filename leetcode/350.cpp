// leetcode 350 - intersection of two arrays 2 - use a simple map approach


#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(auto i : nums1){
            mp[i]++;
        }
        
        for(auto i : nums2){
            if(mp.count(i)){
                mp[i]--;
                if(mp[i]==0){
                    mp.erase(i);
                }
                result.push_back(i);
            }
        }
        
        return result;
    }
};
