// using binary search to find the first bad version

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    bool isBadVersion(int version);

    int firstBadVersion(int n) {
        
        int start =1;
        int end =n;
        
        int pos = -1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            bool isBad = isBadVersion(mid);
            
            if(isBad){
                // if it really is bad then answer is to the left.  
                pos =mid;
                end = mid-1;
            }else{
                //its not bad then the answer is to the right
                
                start =mid+1;
            }
            
            
        }
        
        return pos;
    }
};