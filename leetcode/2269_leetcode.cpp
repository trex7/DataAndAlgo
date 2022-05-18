//forgot to check for division by 0. noob mistake.

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        
        int result =0;
        string nums = to_string(num);
        //cout<<nums<<endl;
        
        string div ="";
        
        for(int i =0;i<nums.size();i++){
            div += nums[i];
            if(i>=k-1){
                
                int n = stoi(div);
                if(n!=0 and num%n==0){
                    result++;
                }
                
                //remove the starting element
                div = div.substr(1);
                //cout<<div<<endl;
                
            }
            
            
        }
        
        return result;
    }
};