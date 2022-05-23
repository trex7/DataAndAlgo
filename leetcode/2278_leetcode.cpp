#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        if(s.size()==0){
            return 0;
        }
        
        int count= 0;
        for(auto i : s){
            if(i==letter){
                count++;
            }
        }
        
        
        return count*100/(int)s.size();
    }
};