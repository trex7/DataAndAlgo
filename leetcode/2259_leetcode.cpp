//complicated logic, it can either be in the middle or at the end. split into
// two scenarios and it will be easier. THink in block fashion.


#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        
        string result ="";
        int pos =-1;
        int prev =-1;
        
        for(int i =0;i<number.size();i++){
            
            if(number[i]==digit){
                
                if(i==number.size()-1){
                    pos=i;
                    break;
                }else{
                    if(number[i+1]>number[i]){
                        pos=i;
                        break;
                    }else{
                        pos=i;
                    }
                }
                    
            }
        }
        
        for(int i =0;i<number.size();i++){
            if(i==pos){
                continue;
            }else{
                result += number[i];
            }
        }
        return result;
    }
};