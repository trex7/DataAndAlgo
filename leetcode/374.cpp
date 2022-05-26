// 374 - guess the number - classic binary search implementations

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
int guess(int num);
    int guessNumber(int n) {
        
        int start =1;
        int end = n;
        
        while(start<=end){
            int mid = start +(end-start)/2;
            
            int ret = guess(mid);
            
            if(ret==0){
                return mid;
            }
            
            if(ret<0){
                end = mid-1;
            }else{
                start=mid+1;
            }
        }
        
        return start;
    }
};