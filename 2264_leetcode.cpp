#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        char result= 0;
        
        for(int i =2;i<num.size();i++){
            if(num[i-2]==num[i-1] and num[i-1]==num[i]){
                
                
                if(num[i]>result){
                    result=num[i];
                }
            }
        }
        
        return result==0?"": string(3,result);
    }
};