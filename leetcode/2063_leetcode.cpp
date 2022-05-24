// dont go to create all the substrings, think in formula fashion.
// what would be the formula for axxx and xaxx. (n-i)*(i+1)
#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;


class Solution {
public:
    
    /**
    
     yaarty
    
    
    
    **/
    long long countVowels(string word) {
        
        long long result =0;
        
        for(int i =0;i<word.size();i++){
            if(word[i]=='a' or word[i]=='e' or word[i]=='i' or word[i]=='o' or word[i]=='u'){
                result += (i+1)*(word.size()-i);
            }

        }
            
        return result;
    }
};