//tribonnaci code

#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start =0;
        int end =arr.size()-1;
        int pos =-1;
        
        while(start<=end){
            
            int mid = start +(end- start)/2;
            
            if(mid==0 or mid==(arr.size()-1)){
                return mid;
            }
            
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                return mid;
            }
            
            if(arr[mid]>arr[mid-1]){
                pos =mid;
                start = mid;
            }else{
                pos = mid;
                end = mid;
            }
        }
        
        return pos;
    }
};