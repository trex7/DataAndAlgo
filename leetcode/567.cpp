// leetcode - thought process took time but well done.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()){
            return false;
        }
        
        vector<int> s1map(26,0);
        vector<int> s2map(26,0);
        
        for(auto i : s1){
            s1map[i-'a']++;
        }
        
        int j =0;
        //cout<<"f";
        for(int i =0;i<s2.size();i++){
            //cout<<i<<endl;
            s2map[s2[i]-'a']++;
            if(i>=s1.size()){
                s2map[s2[j]-'a']--;
                j++;
                
            }
            
            if(i>=(s1.size()-1)){
                if(s1map == s2map){
                    return true;
                }
            }
        }
        return false;
    }
};
